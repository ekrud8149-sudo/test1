/*구조체*/
/*17-1*/
#include <stdio.h>
// struct student
// {
//     int num;
//     double grade;
// };

// int main()
// {
//     struct student s1;

//     s1.num = 2;
//     s1.grade = 2.7;
//     printf("학번 : %d\n", s1.num);
//     printf("학점 : %.1lf\n", s1.grade);

//     return 0;
    
//}
//패딩 바이트 : 구조 체 멤버의 크기가 들쑥날쑥 한 경우 멤버 사이에 넣음. => 바이트 얼라인먼트
//구조체에서는 제일 긴 놈(double형)에 길이를 맞춘다. double:8바이트, int:4바이트, char:1바이트, short:2바이트
// grade 8바이트로 길이를 맞춤. 먼저 num4바이트 할당된 후 나머지 4바이트에 grade할당 불가능 -> 다음 8바이트에 grade할당 => 총 16바이트

//패딩 바이트 줄이기 : 선언한 멤버의 순서를 변경한다. => 패딩 바이트가 가장 작도록 구조체를 선언하면 메모리를 아낄 수 있다.
//#pragma pack(1); 컴파일러에 패딩 바이트를 넣지 않도록 지시

/*17-3*/
// struct profile
// {
//     int age;
//     double height;
// };

// struct student
// {
//     struct profile pf;
//     int id;
//     double grade;
// };

// int main()
// {
//     struct student yuni;

//     yuni.pf.age = 30;
//     yuni.pf.height = 161;
//     yuni.id = 315;
//     yuni.grade = 4.5;

//     printf("나이 :%d\n", yuni.pf.age);
//     printf("키 :%.1lf\n", yuni.pf.height);
//     printf("학번 :%d\n", yuni.id);
//     printf("학점 :%.1lf\n", yuni.grade);

//     return 0;
// }

/*17-8 연산자를 사용해 구조체 배열의 값 출력*/
// struct address
// {
//     char name[20];
//     int age;
//     char tel[20];
//     char addr[80];

// };
// void print_list(struct address *lp);

// int main()
// {
//     struct address list[5] = { //구조체 리스트를 만든다
//         {"류이현", 27, "111-1111", "울릉도 독도"},
//         {"이다경", 24, "222-2222", "서울 성동구"},
//         {"고슴다치", 0, "333-3333", "다경이 집"},
//         {"채수빈 낭랑18", 50, "세", "인천 초정마을"},
//         {"메롱메롱", 45, "555-5555", "황해도 해주"}
//     };

//     print_list(list); //리스트를 넘겨준다
    
//     return 0;

// }

// void print_list(struct address *lp)
// {
//     int i;

//     for(i = 0; i < 5; i++)
//     {
//         printf("%15s%5d%25s%25s\n",
//         (lp + i) -> name, (lp+ i)-> age, (lp+i)->tel, (lp + i)->addr);

//     }
// }

/*공용체 : 모든 멤버가 하나의 저장공간을 공유 예약어 :union*/
/*열거형 : 예약어 :enum  */




/*typedef를 사용한 재정의*/

// struct student
// {
//     int num;
//     double grade;
// };

// typedef struct student Student;

//typedef로 재정의-에약어 생갹가능 .. 앞으로 typedef로 선언하도록 하자
// typedef struct //재정의 되니까 구조체 이름 생략가능
// {
//     int num;
//     double grade;
// }Student; //재정의 된 자료형 이름(여기에 적어주기)

// void print_data(Student *ps);

// int main()
// {
//     Student s1 = {315, 4.2};
//     print_data(&s1);
//     return 0;
// }

// void print_data(Student *ps)
// {
//     printf("학번 : %d\n", ps->num);
//     printf("학점 : %.1lf\n", ps->grade);

// }


//typedef 선언으로 바꿔보자...
// typedef struct 
// {
//     char name[20];
//     int age;
//     char tel[20];
//     char addr[80];

// }address;
// void print_list(address *lp);

// int main()
// {
//     address list[5] = { //구조체 리스트를 만든다
//         {"류이현", 27, "111-1111", "울릉도 독도"},
//         {"이다경", 24, "222-2222", "도두리 마을"},
//         {"고슴다치", 0, "333-3333", "다경이 집"},
//         {"채수빈", 18, "444-44444", "안천초정 마을"},
//         {"메롱메롱", 45, "555-5555", "황해도 해주"}
//     };

//     print_list(list); //리스트를 넘겨준다
    
//     return 0;

// }

// void print_list(address *lp)
// {
//     int i;

//     for(i = 0; i < 5; i++)
//     {
//         printf("%15s%5d%25s%25s\n",
//         (lp + i) -> name, (lp+ i)-> age, (lp+i)->tel, (lp + i)->addr);

//     }
// }
//구조체도 자료형이 같으면 배열을 선언할 수 있다.



//----------------------------------------------------------------------------------------
/*문제 : 학생 5명의 국어,영어,수학 점수를 입력해 총점, 평균, 학점을 구하고
         총점 순으로 정렬을 출력한다. 
         학점은 평균이 90이상이면 A, 80점 이상이면 B, 70점이상이면 C, 그 외에는 F
*/

//구조체에 학번,이름,점수 5명
//총점, 평균, 학점 구하기
//성적순으로 정렬하기

typedef struct //이름, 학번 구조체
{  
    char name[20]; //이름
    int number; //학번
    int kr, eng, math, sum; //점수, 총합
    double avg;
    char grade;
}student;

int main()
{   int i, j;
    student temp;

    student s[5]; //구조체 선언.. 앞에 struct 안적어도됨
    for (int i = 0; i < 5; i++){
        printf("학번 : ");
        scanf("%d", &s[i].number);
        printf("이름 : ");
        scanf("%s", s[i].name);
        printf("점수 : ");
        scanf("%d %d %d", &s[i].kr,&s[i].eng, &s[i].math);
        s[i].sum = s[i].kr + s[i].eng + s[i].math;
        s[i].avg = (double)s[i].sum / 3.0;

        if(s[i].avg >= 90)
        {
            s[i].grade = 'A';
        }
         
        else if (s[i].avg >= 80)
        {
            s[i].grade = 'B';
        }

        else if (s[i].avg >= 70)
        {
            s[i].grade = 'C';
        }

        else 
        {
            s[i].grade = 'F';
        }


    }

    printf("==정렬전==\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d %d %d\t %d\t %.1lf %c\n", 
        s[i].number, s[i].name, s[i].kr, s[i].eng, s[i].math, s[i].sum, s[i].avg, s[i].grade);
    }

    printf("==정렬후==\n");
    for(int j = 0; j < 5-1; j++)
    {   
        for(i = 0; i < 5-1-j; i++){

        
            if(s[i].sum < s[i+1].sum)
            {
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }

            }
        
        }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d %d %d\t %d\t %.1lf %c\n", 
        s[i].number, s[i].name, s[i].kr, s[i].eng, s[i].math, s[i].sum, s[i].avg, s[i].grade);
    }    


    return 0;
}