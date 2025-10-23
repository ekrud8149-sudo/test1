//적외선 센서 
//IR 센서 반사값 임계치 분류기
/*
-적외선 반사 센서를 이용하여 바닥에 있는 라인(검정색)을 감지하고, 라인이 어느 방향에 위치해 있는지 판단
-라인 트레이싱 로봇은 바닥에 있는 검정색 라인을 따라 움직인다
-바닥의 밝기 차이 감지하며 센서 값(임계값)은 0~10123 사이 숫자로 표현된다. 검정 숫자(반사값) 작음,흰색 숫자가 큼
black 1
*/

//함수사용 안한 코드
#include <stdio.h> 

int main(void){
    int N, i, th;
    int black_count = 0;
    float index_avg = 0, sum_index = 0; // 0으로 초기화

    printf("N = "); //센서 개수 입력
    scanf("%d", &N);

    int value[N];
    int label[N]; // N값을 받은 후에 배열 선언해주기

    printf("vale = "); //센서 값 입력
    for (i = 0; i < N; i++){
        scanf("%d", &value[i]);
    }

    printf("threshold = "); //th 값 입력
    scanf("%d", &th);

    for(i = 0; i < N; i++){ //센서 감지 판별
        if (value[i] < th){
            label[i] = 1;
        }
        else 
            label[i] = 0; 
        
    }

    printf("label = \n");
    for(i = 0; i < N; i++) {
        printf("%d", label[i]);
    }

    for(i = 0; i < N; i++) // 검정 라인수
    {
        black_count += label[i];
    }
    printf("black_count =%d\n", black_count);

    for(i = 0; i < N; i++){ //합계
        sum_index += i * label[i];
    }
    
    if (black_count > 0)
        index_avg = sum_index / black_count;
    else
        index_avg = -1; // 검정라인이 없을 때 예외 처리

    printf("index_avg = %.2f\n", index_avg);

    return 0;
   

}

//함수 사용하기 (미완성)

#include <stdio.h>

void classify(const int value[], int label[], int N, int th);
int count(const int label[], int N);
double average(const int label[], int N);

int main(void)
{
    int N, i, th;
    printf("N = "); //센서 개수 입력
    scanf("%d", &N);

    int value[N];
    int label[N]; // N을 초기화하고 i값 선언해주기 - 배열 크기 선정

    printf("vale = "); //센서 값 입력
    for (i = 0; i < N; i++){
        scanf("%d", &value[i]);
    }

    printf("threshold = "); //th 값 입력
    scanf("%d", &th);

    for(i = 0; i < N; i++){ //센서 감지 판별
        if (value[i] < th){
            label[i] = 1;
        }
        else 
            label[i] = 0; 
        
    }

    printf("label = ");
    for(i = 0; i < N; i++) {
        printf("%d", label[i]);
    }

    
}
int count(void){

    for(i = 0; i < N; i++) //// 검정 라인수
    {
        black_count += label[i];
    }
    printf("black_count =%d\n", black_count);

}

int average(void){

    for(i = 0; i < N; i++){ //합계
        sum_index += i * label[i];
    }
    
    if (black_count > 0)
        index_avg = sum_index / black_count;
    else
        index_avg = -1; // 검정라인이 없을 때 예외 처리

    printf("index_avg = %.2f\n", index_avg);

    return 0;
   

}

//

#include <stdio.h>

// 함수 선언 도움
void classify(const int value[], int label[], int N, int th);
int count_black(const int label[], int N);
double average_index(const int label[], int N);

int main(void)
{
    int N, i, th;

    printf("N = "); // 센서 개수 입력
    scanf("%d", &N);

    int value[N];
    int label[N];

    printf("value (%d개 입력): ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &value[i]);
    }

    printf("threshold = ");
    scanf("%d", &th);

    // 분류 함수 호출
    classify(value, label, N, th);

    printf("label = ");
    for (i = 0; i < N; i++) {
        printf("%d ", label[i]);
    }
    printf("\n");

    // 검정 라인 개수 계산
    int black_count = count_black(label, N);
    printf("black_count = %d\n", black_count);

    // 평균 인덱스 계산
    double index_avg = average_index(label, N);
    printf("index_avg = %.2f\n", index_avg);

    return 0;
}

// -------------------------------------------------
// value[]를 기준으로 label[]에 1(검정) / 0(흰색) 분류
void classify(const int value[], int label[], int N, int th) {
    for (int i = 0; i < N; i++) {
        if (value[i] < th)
            label[i] = 1;
        else
            label[i] = 0;
    }
}

// -------------------------------------------------
// 검정 라인 개수 계산
int count_black(const int label[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        count += label[i];
    }
    return count;
}

// -------------------------------------------------
// 검정 라인의 평균 인덱스 계산
double average_index(const int label[], int N) {
    int black_count = count_black(label, N);
    double sum_index = 0.0;

    for (int i = 0; i < N; i++) {
        sum_index += i * label[i];
    }

    if (black_count == 0)
        return -1; // 검정 라인이 없을 경우 예외 처리
    else
        return sum_index / black_count;
}



