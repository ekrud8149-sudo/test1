// /*
// 포인터는 메모리의 주소를 저장하는 변수
// 포인터는 변수의 시작 주소를 저장한다.


// */


#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;

    
    printf("int형 변수의 주소 : %p\n", &a); //u는 10진수로 출력,p는 16진수로 출력
    printf("double형 변수의 주소 : %p\n", &b);
    printf("char형 변수의 주소 : %p\n", &c);

    return 0;

}

#include <stdio.h>
int main(void){
    int a;
    int *pa;

    pa = &a;
    *pa = 10;

    printf("포인터로 a값 출력: %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a);

    return 0;
}

#include <stdio.h>

int main(void){
    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb;
    int *pt = &total;
    double *pg = &avg;

    pa = &a;
    pb = &b;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 값 : %.1lf\n", *pg);

}

int main(){
    int a = 10, b = 20;
    const int *pa = &a;

    printf("변수 a의 값 : %d\n", *pa);
    pa = &b;
    printf("변수 b의 값 : %d\n", *pa);
    pa = &a;
    a = 20;
    printf("변수 a의 값 : %d\n", *pa);

    return 0;
}

// //주소와 포인터의 크기

#include <stdio.h>

int main(void)
{
    char ch;
    int in;
    double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

    printf("char * 포인터의 크기 : %d\n", sizeof(pc));
    printf("int * 포인터의 크기 : %d\n", sizeof(pi));
    printf("double * 포인터의 크기 : %d\n", sizeof(pd));

    printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

    return 0;
}

// //정수 a를 선언하고 초기값 10을 저장한 뒤, 포인터를 이용해 변수 a의 값을 20으로 변경해보시오
// //또한 포인터 사용 전후의 출력 결과를 비교하시오

#include <stdio.h>
int main(void){
    int a = 10;
    int *p;

    p = &a;

    printf("포인터 사용 전 = %d\n",a);

    *p = 20;

    printf("변경후: a = %d\n", a);
    return 0;
}


/*포인터 대입 규칙 -서로 다른 타입의 포인터를 암시적으로 대입할 수 없음 */

#include <stdio.h>
int main(void){
    int a  =10;
    int *p = &a;
    double *pd;  //이거 안됨

    pd = p; // 서로 다른 타입의 포인터를 암시적으로 대입할 수 없음
     printf("%d\n", *pd);

    return 0;
}

해결 1
#include <stdio.h>
int main(void){
    int a  =10;
    int *p = &a;
    int *pd; //int로 바꿔준다

    pd = p; // 자료형이 같아야한다.
     printf("%d\n", *pd);

    return 0;
}

//해결 2 - 형변환 연산자
int main(void){
    int a  =10;
    int *p = &a;
    double *pd; 

    pd = p;
    printf("%d\n", *(int *)pd); 
    return 0;
}

/* 포인터를 사용한 두 변수 값 교환 swap*/ 
void swap(int *pa, int *pb);

int main(void){
    int a= 10, b = 20;

    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(int *pa, int*pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

//????
void swap(*pa, *pb);

int main(void){
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

void swap(*pa, *pb){
    int temp;
      
    temp = *a;
    *a = b;
    b = temp;
}
