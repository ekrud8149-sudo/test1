#include <stdio.h>

 /*getcnar 함수를 사용한 문자열 입력*/
// void my_gets(char *str, int size);

int main(void)
{
    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열: %s\n", str);

    return 0;
}

void my_gets(char *str, int size)
{
    int ch;
    int i = 0;

    ch = getchar();
    while ((ch != '\n') && (i < size -1))

    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';
    
}

/*11-7.c 입력 버퍼 지우기*/
int main(void)
{
    int num, grade;

    printf("학번입력: ");
    scanf("%d", &num);
    getchar();
    printf("학점 입력: ");
    grade = getchar();
    printf("학번 :%d, 학점 :%c", num, grade);

    return 0;
}

// /*scanf 함수를 사용한 문자열 입력 - 공백 안받아줌*/ 

int main(void)
{
    char str[80];

    printf("문자열 입력: ");
    scanf("%s", str);
    printf("첫 번째 단어 :%s\n",str);
    scanf("%s",str);
    printf("버퍼에 남아있는 두 번째 단어: %s\n", str);

    return 0;
}


/*gests함수를 사용한 문자열입력 - 공백 받아줌*/
int main(void)
{
    char str[80];

    printf("공백을 포함한 문자열 입력: ");
    gets(str);
    printf("입력한 문자열은 %s입니다.", str);

    return 0;
}


//배열명은 주소값과 같다

/*fgets 함수 : 어디까지 읽을지 결정가능*/
int main()
{
    char str[80];

    printf("공백이 포함된 문자열 입력 :");
    fgets(str, sizeof(str), stdin);

    printf("입력된 문자열은 %s입니다\n", str);

    return 0;
}


/*지역변수, 전역변수*/

/*전역번수 : 이름이 바뀌면 사용 함수의 모든 이름을 찾아 바꿔야 한다. 
            값이 이상하면 접근 가능한 모든 함수를 살펴야한다.
            같은 이름의 지역 변수에 의해 사용 범위가 제한된다.*/


void assign10(void);
void assign20(void);

int a; //전역변수 바깥에 있으면 자동 초기화 = 0

int main(void)
{
    printf("함수 호출 전 a값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a값 : %d\n", a);

    return 0;
}

void assign10(void)
{
    a = 10;
}

void assign20(void)
{
    int a;

    a = 20;
}

/*14장 다차원 배열, 포인터 배열*/

int main()
{ 
    int score[2][3][4] = {
        {{72, 80, 90, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
        {{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
        };

    int i, j, k;


    for (i = 0; i <2; i++)
    {
        printf("%d반 점수..\n", i+1);
        for(j =0; j < 3; j++)
        {
            for(k = 0; k < 4; k++)
            {
                printf("%5d", score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    
    }
    return 0;
}

int main()
{   
    //1부터 20까지 초기화
    
    int num[5][6] = {
                {1,2,3,4,5,0},
                {6,7,8,9,10,0},
                {11,12,13,14,15,0},
                {16,17,18,19,20,0}
    };
    

    //행,열의 합 저장
    int i, j;
    for(i = 0; i < 4; i++)
    {   
        for(j = 0; j < 5; j++)
        {
            num[i][5] += num[i][j]; //행의 합
            num[4][j] += num[i][j]; //열의 합
            num[4][5] += num[i][j]; //최종 합
        }
    }

    //전체 합 출력
    for(i = 0; i < 5; i++){ //for문 한개씩 더 늘려서 전체 합 출력
        for(j = 0; j< 6; j++)
        {   
            printf("%5d",num[i][j]);
            
        }
        printf("\n"); 
    }

    return 0;
}

//포인터로 해보기


