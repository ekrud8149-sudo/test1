//return 1의 의미 비정상적인동작, return 0 정상적인 동작

#include <stdio.h>
#include <math.h>

// int main() {
//     double x, y;

//     printf("실수 x 입력: ");
//     scanf("%lf", &x);
//     printf("실수 y 입력:");
//     scanf("%lf", &y);

//     printf("\n[math.h 함수 예제]\n");
//     printf("sqrt(x) = %.4f\n", sqrt(x));

//     printf("pow(x,y) = %.4f\n", pow(x,y));

//     printf("sin(x) = %.4f\n", sin(x));
//     printf("cos(x) = %.4f\n", cos(x));
//     printf("log(x) = %.4f\n", log(x));
//     printf("fabs(x) = %.4f\n", fabs(x));

//     return 0;

// }

//for는 반복횟수가 정해져있을 때 사용
/*
    C언어
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("합계: %d\n", sum);
    return 0;
}
------
    Python
sum = 0
for i in range(1, 11):
    sum += i
print("합계:", sum)

*/

//do while문 : 실행문 반드시 한번 실행한다. 실행문을 실행한 후 조건 검사
//while문 조건 검사 후 참이면 반복문 실행

// int main(void)
// {
//     int a = 1;

//     do
//     {
//         a = a * 2; // 실행문

//     } while (a <10); //조건식
//     printf("a : %d\n", a);

//     return 0;
// }


//중첩 반복문

// int main(void)
// {
//     int i, j;

//     for(i = 0; i < 5; i++)
//     {
//         for (j = 5; j > i; j--)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }



//-----------------------------------------------------------------
//

// int main(void)
// {   double W, N = 4, m = 1500, DM = 1.2, SF = 2, R, t, 
//             G, c = 0.018, g = 9.81;
//     double F_min, F_motor;

//     printf("총 하중 : %.1lf\n", m);
//     printf("구동 바퀴 수 : %.1lf\n",N);
    

//     for(int i = 1; i <= 10; i++)
//     {
//         printf("바퀴 반지름 : "); 
//         scanf("%1lf", &R);
        
//         printf("토크: ");
//         scanf("%lf", &t);
        
//         printf("감속비 : ");
//         scanf("%1lf", &G);

//         W = m * g;

//         F_min = c * W * SF * DM;
//         F_motor = t * G * N / R;

//         printf("필요한 최소 견인력 : %.1lf\n", F_min);
//         printf("모터가 낼 수 있 견인력 : %.1lf\n", F_motor);
//     }
    
   
//     if (F_motor >= F_min){
//         printf("판정 : 만족");
//     } else{
//         printf("판정 : 불만족");
//     }
//     return 0;
// }

//구동 바퀴: 동력을 얻는 바퀴 /감속기. 감속비
//구성 : 바퀴, 감속기, 모터


//----------구구단----------------

// int main(void)
// {   
//     for (int i = 1; i < 10; i++)
//     {
//         printf("5 * %d = %d\n", i, 5 * i);
//     }
//     return 0;
// }

//함수

