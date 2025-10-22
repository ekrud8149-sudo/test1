#include <stdio.h>


// int sum(int x, int y)
// {
//     int temp;

//     temp = x + y;
//     return temp;
// }

// int main(void)
// {
//     int a = 10, b = 20;
//     int result;

//     result = sum(a, b);
//     printf("result :%d\n", result);

//     return 0;
// }

// void print_line(void) // main 문 위에 정의하면 함수선언을 해주지 않아도 된다. 
//                     //즉 메인문 아래에 실행될 때 함수를 선언한다.
// {
//     int i;

//     for (i = 0; i < 50; i++)
//     {
//         printf("-");
//     }
//     printf("\n");
// }

// int main(void)
// {
//     print_line();        // 함수 호출
//     printf("학번      이름      전공      학점\n");
//     print_line();        // 함수 호출

//     return 0;
// }


// int sum(int n) {
//     if (n == 11)  
//         return 0;
//     else
//         return n + sum(n + 1);  // 자기 자신 호출
// }

// int main() {
//     int result = sum(1);
//     printf("1부터 10까지 합 = %d\n", result);
//     return 0;
// }


//배열
// int main(void)
// {
//     int score[5];
//     int i;
//     int total = 0;
//     double avg;

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &score[i]);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         total += score[i];
//     }
//     avg = total / 5.0;

//     for (i = 0; i < 5; i++)
//     {
//         printf("%5d", score[i]); //공백 다섯칸
//     }
//     print("\n")
//     printf("\n평균 : %.lf\n", avg);

//     return 0;
// }

// //sizeof 연산자 배열 : 배열 전체 크기를 구할 때

// int main(void)
// {
//     int score[5];
//     int i;
//     int total = 0;
//     double avg;
//     int count;

//     count = sizeof(score) / sizeof(score[0]); //배열의 원소 개수를 구함
//     /

//     for (i = 0; i < count; i++)
//     {
//         scanf("%d", &score[i]);
//     }

//     for (i = 0; i < count; i++)
//     {
//         total += score[i];
//     }
//     avg = total / (double)count;

//     for (i = 0; i < count; i++)
//     {
//         printf("%5d", score[i]); //공백 다섯칸
//     }
//     printf("\n");
//     printf("\n평균 : %.lf\n", avg);

//     return 0;
// }

//scanf("%s", str); 문자열 scanf로 입력받을때는 &안쓴다

// int main(void)
// {
//     char str[80];
//     printf("문자열 입력 : ");
//     gets(str);
//     puts("입력된 문자열 : ");
//     puts(str);

//     return 0;
// }

/*실습 
306도 센서에서 모의로 입력된 거리값 중 가장 가까운 데이터를 바탕으로 장애물의 위치를 판단한다.
-라이다 데이터를 배열에 저장하고 최솟값과 위치(각도)를 찾아낸다. 
-라이다 스캔 데이터 개수 : 36개 0~10, 11~20, 21~30
-0~ 500cm 사이의 실수형 거리값
*/

/*입력 : 각도별 거리값, 
 처리 : 배열을 순회하여 최솟값 탐색, 
 출력 : 최솟값(거리)과 해당각도(인덱스)
 조건 : for문과 if문만을 사용. 함수금지*/

// int main(void)
// {
//     double dist[360];
//     int i, min_index = 0;
//     double min_value;

//     printf("360도 라이다 거리값 입력\n");
//     for (i = 0; i < 10; i++) {
//         printf("%3d도 거리(cm): ", i);
//         scanf("%lf", &dist[i]);

//     }
//     min_value = dist[0];
//     for (i = 1; i < 10; i++) {
//         if (dist[i]< min_value){
//             min_value = dist[i];
//             min_index = i;

//         }
//     }
//     printf("\n라이다 최소 거리 탐색 결과\n");
//     printf("가장 가까운 거리: %.1f cm\n", min_value);
//     printf("장애물 방향:%d도\n", min_index);

//     return 0;

// }


//최소 거리 값 3개
#include <stdio.h>  

int main(void)
{
    double dist[10];
    int i;
    double min1 = 999999, min2 = 999999, min3 = 999999;
    int idx1 = -1, idx2 = -1, idx3 = -1;

    printf("10개의 라이다 거리값 입력\n");
    for (i = 0; i < 10; i++) {
        printf("%3d도 거리(cm): ", i);
        scanf("%lf", &dist[i]);
    } 

    for (i = 0; i < 10; i++) {
        if (dist[i] < min1) {                     // 1순위 갱신
            min3 = min2; idx3 = idx2;
            min2 = min1; idx2 = idx1;
            min1 = dist[i]; idx1 = i;
        } else if (dist[i] < min2) {              // 2순위 갱신
            min3 = min2; idx3 = idx2;
            min2 = dist[i]; idx2 = i;
        } else if (dist[i] < min3) {              // 3순위 갱신
            min3 = dist[i]; idx3 = i;
        }
    }

    printf("\n가장 가까운 거리 TOP 3\n");
    printf("1: %.1f cm (방향 %d도)\n", min1, idx1);
    printf("2: %.1f cm (방향 %d도)\n", min2, idx2);
    printf("3: %.1f cm (방향 %d도)\n", min3, idx3);

    return 0;
}

