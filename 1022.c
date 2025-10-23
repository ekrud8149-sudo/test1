
//최소 거리 값 3개 출력
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>

// int main(void)
// {
//     double dist[10];
//     int i;
//     double min1 = 999999, min2 = 999999, min3 = 999999;
//     int idx1 = -1, idx2 = -1, idx3 = -1;

//     printf("10개의 라이다 거리값 입력\n");
//     for (i = 0; i < 10; i++) {
//         printf("%3d도 거리(cm): ", i);
//         scanf("%lf", &dist[i]);
//     } 

//     for (i = 0; i < 10; i++) {
//         if (dist[i] < min1) {                     // 1순위 갱신
//             min3 = min2; idx3 = idx2;
//             min2 = min1; idx2 = idx1;
//             min1 = dist[i]; idx1 = i;
//         } else if (dist[i] < min2) {              // 2순위 갱신
//             min3 = min2; idx3 = idx2;
//             min2 = dist[i]; idx2 = i;
//         } else if (dist[i] < min3) {              // 3순위 갱신
//             min3 = dist[i]; idx3 = i;
//         }
//     }

//     printf("\n가장 가까운 거리 TOP 3\n");
//     printf("1: %.1f cm (방향 %d도)\n", min1, idx1);
//     printf("2: %.1f cm (방향 %d도)\n", min2, idx2);
//     printf("3: %.1f cm (방향 %d도)\n", min3, idx3);

//     return 0;
// }
// int main(void)
// {
//     srand(time(NULL)); //랜덤 초기화

//     int r1 = rand() % 10;
//     int r2 = rand() % 100 +1;
//     int r3 = rand() % 21 -10;

//     printf("0~9 랜덤 : %d\n", r1); //0~9
//     printf("1~100 랜덤 : %d\n", r2); // 1~100
//     printf("-`0~10 랜덤 : %d\n", r3); // -10~10

//     return 0;


// } 

//예제 1
/*
로봇의 속도 로그 데이터를 배열로 입력 받아 이웃한 시점 간의 속도 변화량을 계산하여 급가속, 급제동 횟수 계산

배열을 이용해 주행 데이터 저장, 반복문으로 이웃한 값의 차이를 계산, 조건물으로 급가속 급제동 카운트.
*/

//내가 입력
// int main(void)
// {   
//     int i;
//     double speed[10];
//     int accel = 0, brake = 0;
//     double delta;

//     for (i = 0; i < 10; i++) {
//         printf("%d번째주행 데이터 입력: ", i +1); //속도 데이터
//         scanf("%lf", &speed[i]);
//     } 

//     for (i = 1; i < 10; i++)
//     {   
//         delta = speed[i] - speed[i-1];
//         if (delta >= 10){
//             accel++; 
//         } else if (delta <= -10) {
//             brake++;           
//         }
//     }

//     printf("급가속 횟수:%d\n", accel);
//     printf("급제동 횟수:%d\n", brake);

//     return 0;

// }

//랜덤으로 500개 입력 받기

// int main(void)
// {   
//     int i;
//     int speed[500];
//     int accel = 0, brake = 0;
//     int delta;

//     srand(time(NULL));

//     for (i = 0; i < 500; i++)
//     {
//         speed[i] = rand() % 100 +1;
//     }

//     for (i = 0; i < 500; i++)
//     {
//         printf("\n주행 데이터 : %d", speed[i]);
//     }

//     for (i = 1; i < 500; i++)
//     {   
//         delta = speed[i] - speed[i-1];
//         if (delta >= 10){
//             accel++; 
//         } else if (delta <= -10) {
//             brake++;           
//         }
//     }

//     printf("급가속 횟수:%d\n", accel);
//     printf("급제동 횟수:%d\n", brake);

//     return 0;

// }



// 2) 변화량이 10이상 되지 않도록
// int main(void)
// {   
//     int i;
//     int speed[10]; //속도 데이터 배열
//     int delta; 

//     srand(time(NULL));

//     for (i = 0; i < 10; i++) //속도 데이터 10개 랜덤으로 받기
//     {
//         speed[i] = rand() % 100 +1;
//         speed[i-1] = speed[i] - ??
//     }

//     for (i = 0; i < 10; i++)
//     {
//         printf("\n주행 데이터 : %d", speed[i]);
        
//     }

//     printf("주행 데이터:%d", speed);

//     return 0;

// }

//2)
// int main(void)
// {
//     int i;
//     int speed[10];
//     int delta;

//     srand(time(NULL));

//     // 첫 번째 값은 1~100 중 랜덤
//     speed[0] = rand() % 100 + 1;

//     // 두 번째부터는 이전 값 기준 ±10 범위 내에서 생성
//     for (i = 1; i < 10; i++) {
//         int change =  rand() % 20 - 10; // -10 ~ +10 -9~9
//         speed[i] = speed[i - 1] + change;

//         // 속도가 1~100 범위를 벗어나지 않게 조정
//         if (speed[i] < 1) speed[i] = 1;
//         if (speed[i] > 100) speed[i] = 100;
//     }

//     // 결과 출력
//     printf("---주행 속도 데이터--\n");
//     for (i = 0; i < 10; i++) {
//         printf("%d ", speed[i]);
//     }

//     return 0;
// }

/*예제2. 배터리 잔량 히스테리시스 경보 시스템*/



// int main(void){
//     int i;
//     int charge[100];
//     int warning = 0;
    
//     for (i = 0; i < 10; i++) {
//          printf("%d번째배터리 잔량 입력:", i + 1); 
//          scanf("%d", &charge[i]); //배터리 잔량 입력받기
//      } //i = 10인 상태로 for문 끝남
    
//     for (i = 0; i < 10; i++){ //for문에서 조건 실행
//         if (charge[i] <= 30){
//             warning = 1;
//         }

//         else if (warning = 1 && charge[i] >= 35){
//             warning = 0; //스위치 off
//         }

//         printf("%2d번째 잔량: %3d%%  →  경고 스위치: %s\n",
//                i + 1, charge[i],
//                (warning == 1 ? "ON" : "OFF"));
//         }
//     return 0;
// }
