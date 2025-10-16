#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    double da;
    char ch;

    a = 10;
    b = a;
    c = a+20;
    da = 3.5;
    ch = 'A';

    printf("a값 : %d\n", a);
    printf("b값 : %d\n", b);
    printf("c값 : %d\n", c);
    printf("da값 : %.1lf\n", da);
    printf("char값 : %c\n", ch);

    return 0;
}

