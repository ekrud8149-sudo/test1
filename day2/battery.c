/*예제*/
//평균속도 6.4


#include <stdio.h>

int main(void)
{
    printf("-------사전 선정 정보-------\n");

    float t, d, E, R = 0.1, eta = 0.95, I_load = 8, vel = 6.4, p;
    int C = 80, V = 48;
    
    E = V * C * eta * (1-R);

    p = (V * I_load) / eta;

    t = E / p;

    d = vel * t;

    printf("소용 가능 에너지(Wh):%f\n", E);
    printf("소비전력(W):%f\n", p);
    printf("런타임(h):%f\n", t);
    printf("주행거리(km):%f\n", d);

    return 0;
    

}
