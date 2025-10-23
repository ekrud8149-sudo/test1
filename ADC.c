//아날로그 센서에서 읽은 ADC값을 전압과 거리로 변환하는 프로그램

#include <stdio.h>


int main(){

    int N, i;
    double Vref, k;
    int voltage;
    int voltage[i];
    int distance;
    int distance[i]

    printf("N ="); //ACD 값의 개수 입력
    scanf("%d", &N);

    int adc[i];
    printf("adc =");
    for (i = 0; i < N; i++) { //Adc 값 입력
        scanf("%d", &adc[i]);
    }

    printf("Vref =\n"); //기준전압 Vref 입력
    scanf("%lf", &Vref);

    printf("k =\n"); //거리 변환 상수 k 입력
    scanf("%lf", &k);
//----
    printf("ADC  -> %3d",adc[i]);
    
    for (i = 0; i < N; i++) { //전압 구하기

        voltage[i] = adc[i] * Vref / 1023;
        printf("전압(v)-> %3d", voltage[i]);
    }


    for (i = 0; i < N; i++) { //거리 구하기

        distance[i] = k / voltage[i];
        printf("거리(cm)-> %3d", distance[i]);
    }
    

    return 0;
}

// 수정

#include <stdio.h>

int main(void) {
    int N, i;
    double Vref, k;

    printf("N = "); // ADC 값의 개수 입력
    scanf("%d", &N);

    int adc[N];
    double voltage[N];
    double distance[N];

    printf("adc (%d개 입력): ", N);
    for (i = 0; i < N; i++) { // ADC 값 입력
        scanf("%d", &adc[i]);
    }

    printf("Vref = "); // 기준 전압
    scanf("%lf", &Vref);

    printf("k = "); // 거리 변환 상수
    scanf("%lf", &k);

    printf("\n--- 계산 결과 ---\n");

    for (i = 0; i < N; i++) {
        voltage[i] = adc[i] * Vref / 1023.0; // 전압 계산
        distance[i] = k / voltage[i];        // 거리 계산

        printf("ADC: %4d | Voltage: %6.3lf V | Distance: %6.2lf cm\n",
               adc[i], voltage[i], distance[i]);
    }

    return 0;
}

//함수
#include <stdio.h>

// 함수 선언 (프로토타입)
double toVoltage(int adc, double Vref);
double toDistance(double voltage, double k);
void printResult(const int adc[], const double voltage[], const double distance[], int N);

int main(void) {
    int N, i;
    double Vref, k;

    printf("N = "); // ADC 값의 개수 입력
    scanf("%d", &N);

    int adc[N];
    double voltage[N];
    double distance[N];

    printf("adc (%d개 입력): ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &adc[i]);
    }

    printf("Vref = "); // 기준 전압
    scanf("%lf", &Vref);

    printf("k = "); // 거리 변환 상수
    scanf("%lf", &k);

    // 계산
    for (i = 0; i < N; i++) {
        voltage[i] = toVoltage(adc[i], Vref);
        distance[i] = toDistance(voltage[i], k);
    }

    // 결과 출력
    printResult(adc, voltage, distance, N);

    return 0;
}

// --------------------------------------------------
// ADC 값을 전압(V)으로 변환
double toVoltage(int adc, double Vref) {
    return adc * Vref / 1023.0;
}

// --------------------------------------------------
// 전압을 거리(cm)로 변환
double toDistance(double voltage, double k) {
    if (voltage == 0)  // 0V일 때 예외 처리
        return -1.0;
    return k / voltage;
}

// --------------------------------------------------
// 결과 출력 함수
void printResult(const int adc[], const double voltage[], const double distance[], int N) {
    printf("\n--- 계산 결과 ---\n");
    for (int i = 0; i < N; i++) {
        printf("ADC: %4d | Voltage: %6.3lf V | Distance: %6.2lf cm\n",
               adc[i], voltage[i], distance[i]);
    }
}
