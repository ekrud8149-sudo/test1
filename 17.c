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
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];

};
void print_list(struct address *lp);

int main()
{
    struct address list[5] = { //구조체 리스트를 만든다
        {"류이현", 27, "111-1111", "울릉도 독도"},
        {"이다경", 24, "222-2222", "서울 성동구"},
        {"고슴다치", 0, "333-3333", "다경이 집"},
        {"채수빈 낭랑18", 50, "세", "인천 초정마을"},
        {"메롱메롱", 45, "555-5555", "황해도 해주"}
    };

    print_list(list); //리스트를 넘겨준다
    
    return 0;

}

void print_list(struct address *lp)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%15s%5d%25s%25s\n",
        (lp + i) -> name, (lp+ i)-> age, (lp+i)->tel, (lp + i)->addr);

    }
}

/*자기 참조 구조체로 list만들기*/
