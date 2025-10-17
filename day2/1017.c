#include <stdio.h>

//unsigned 정수 자료형

int main(void)

{
    unsigned int a;

    a = 4294967295;
    printf("%d\n", a);
    a = -1;
    printf("%u\n", a); 
//
    char fruit[20] = "strawberry"; //char 배열 선언과 문자열 초기화
    printf("딸기 : %s\n", fruit); //배열명으로 저장된 문자열
    printf("딸기잼 :  %s %s\n", fruit, "jam");

//const를 사용한 변수는 초깃값 설정 불가

    int income = 0;
    double tax;
    const double tax_rate = 0.12; //밑에서 값 변경 불가

    
    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다.\n", tax);


//얘약어는 컴파일러와 약속된 단어(내장함수), 식별자는 사용자가 만들어낸 단어.
//변수의 형태를 자료형, 정수형과 실수형이 있음. char는 1타이트 정수형.



    return 0;
}