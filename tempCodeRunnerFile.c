
int main(void)
{   
    int i;
    int speed[500];
    int accel = 0, brake = 0;
    int delta;

    srand(time(NULL));

    for (i = 0; i < 500; i++)
    {
        speed[i] = rand() % 100 +1;
    }

    for (i = 0; i < 500; i++)
    {
        printf("\n주행 데이터 : %3d", speed[i]);
        if ((i + 1) % 20 == 0) printf("\n");
    }

    for (i = 1; i < 500; i++)
    {   
        delta = speed[i] - speed[i-1];
        if (delta >= 10){
            accel++; 
        } else if (delta <= -10) {
            brake++;           
        }
    }

    printf("급가속 횟수:%d\n", accel);
    printf("급제동 횟수:%d\n", brake);

    return 0;

}
