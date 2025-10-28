#include <stdio.h>
/*이중 포인터 활용*/
/*15-2.c 포인터 값을 바꾸는 함수의 매개변수*/
// void swap_ptr(char **ppa, char **ppb);

// int main()
// {
//     char *pa = "success";
//     char *pb = "failure";
    
//     printf("pa -> %s, pb -> %s\n", pa, pb);
//     swap_ptr(&pa, &pb);
//     printf("pa -> %s, pb -> %s\n", pa, pb);

//     return 0;
// }
// void swap_ptr(char **ppa, char **ppb)
// {
//     char *pt;

//     pt = *ppa; //서로 swap시킨다
//     *ppa = *ppb;
//     *ppb = pt;
// }

/*15-3*/
// void print_str(char **pps, int cnt);

// int main()
// {
//     char *ptr_ary[] = {"eagle", "tiger", "Lion", "squirrel"};
//     int count;

//     count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); //  4 = 32/8
//     print_str(ptr_ary, count);

//     return 0;
// }

// void print_str(char **pps, int cnt)
// {
//     int i;

//     for (i = 0; i < cnt; i++)
//     {
//         printf("%s\n", pps[i]);
//     }
// }

/*15-5 배열 포인터*/

/*예제*/

// int main()
// {
//     int a = 10, b = 20;
//     int *pa = &a, *pb = &b;
//     int *ppa = &pa, *ppb = &pb;
//     int *pt;

//     pt = *ppa;
//     *ppa = *ppb;
//     *ppb = pt;
//     printf("a : %d, b : %d\n", a, b);
//     printf("*pa : %d, *pb : %d", *pa, *pb);

//     return 0;


// }

/*예제2*/

// int *func(int a, int *x); //주소 때문에 함수 앞에 포인터를 붙인다.

// int main()
// {
//     int i;
//     int x= 10;
//     int *p;
//     int a[100];

//     for(i=0; i<100; i++)
//     {
//         a[i] = i *10;
//     }

//     p = func(x,a);
//     printf("sum = %d\n", x + a[0] + a[1] + p[0] + p[1]); //10 + 20 + 20 + 20  =70

//     return 0;
// }

// int *func(int a, int *x)
// {
//     a = a + 10;
//     x = x + 1;
//     *x = *x * 2;

//     return x; //x는 주소다.
// }
// //출력 결과 sum = 70


/*함수 포인터 15-8.c*/

/*void 포인터 : 가리키는 자료형이 정해지지 않은 포인터이다
                간접 참조 연산, 정수 연산 불가능, 형태를 바꿔서 써야함*/

// int main()
// {
//     int a =10;
//     double b = 3.5;
//     void *vp;  //void포인터 선언 

//     vp = &a;
//     printf("a : %d\n", *(int *)vp); //int로 형변환

//     vp = &b;
//     printf("b : %.1lf\n", *(double *)vp); //double로 형변환

//     return 0;

// }


