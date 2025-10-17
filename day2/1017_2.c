#include <stdio.h>

int main(void)
{
//scanf
    // char grade;
    // char name[20];

    // printf("학점 입력 : ");
    // scanf("%c", &grade);

    // printf("이름입력: ");
    // scanf("%s", name);
    // printf("%s의 학점은 %c입니다.\n", name, grade);

    

//연산자 /몫, %나머지, inv음수, ++증가, --감소, > >=, <=, ==, !=


//전위 표기, 후위표기
    // int a = 10, b =10;

    // printf("a : %d\n", a++);
    // printf("b : %d\n", ++b);
   
//논리 연산자 $$(and), ||(or), !(not)


//형 변환 연산자 : 잠깐 원하는 형태로 바꿈
 /*(double)10 - > 10.0*/
 /*(int)10.7 - > 10*/

    // int a = 20, b = 3;
    // double res;

    // res = ((double)a) / ((double)b);
    // printf("a = %d\nb = %d\n", a, b);
    // printf("a / b 의 결과 :  %.1lf\n", res);

    // a = (int)res;
    // printf("(int) %.1lf의 결과 : %d\n", res, a);

//변수 크기 sizedof
    // printf("long형의 변수 크기 : %zu\n", sizeof(long)); // long 변수 크키:8, 서식지정자:zu
    // printf("int형의 변수 크기 : %zu\n", sizeof(int)); //sizeof 서식 지정자 zu

//조건 연산자
    // int a = 10, b = 20,res;

    // res = (a > b) ? a : b;
    // printf("큰값 :%d\n", res);

    // res = (a > b) ? a-b : a * b;
    // printf("실행 ㄱㄱ :%d\n", res);

// 비트연산자 xor(^)는 같으면 0 다르면 1,  &논리곱, :논리합, ~부정  => 2진수 변환 필요

//복합 대입 연산자 a+=10;
    /*
    a += b
    a -= b
    a *= b
    a /= b
    a %= b
    a &= 2 (&, ^, |, << , >>)    
    */

//if else문 --플로우차트를 만들어라...다이아몬드는 조건문, 네모가 실행문
    // int a=0, b = 0;

    // if (a > 0)
    // {
    //     b = 1;
    // }

    // else if( a== 0){
    //     b = 2;
    // }

    // else{
    //     b = 3;
    // }

    // printf("b : %d\n", b);

//if a문 중첩

    // if (a > 0)
    // {
    //     if( b >= 0)
    //     {
    //         b = 1;
    //     }

    //     else
    //     {
    //         b = -1;
    //     }
    // }
    // /*위 아래 같음*/
    // if ((a > 10) && (b > 0))
    // {
    //     b =1;
    // }
    // if ((a > 10) && (b <0))
    // {
    //     b = -1;
    // }

// switch case 문 - break가 없으면 계속 실행된다.







return 0;

}