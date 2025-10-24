
/*배열명으로 배열 요소 사용하기*/
//배열명은 배열의 첫 번재 요소의 주소이다.

#include <stdio.h>

int main()
{
    int ary[3];
    int i;
    *(ary + 0) = 10;
    *(ary + 1) = *(ary +0) +10;

    printf("세 번째 배열 요소에 키보드 입력: ");
    scanf("%d", ary + 2);

    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    return 0;
}

// 포인터 변수를 배열처럼 사용
int main()
{
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for (i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }

    return 0;
}

/*배열명은 값을 바꿀 수 없다. 포인터는 값을 바꿀 수 있다.*/
//불가능
//arry = arry + 1 
//arry++

//가능
// pa = pa +1 
// pa++


//포인터 뺄셈
int main(){
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;
    int *pb; pa + 3;

    printf("pa : %u\n", pa);
    printf("pa : %u\n", pa);

}

void print_ary(int *pa);

/*배열을 처리하는 함수*/
int main()
{
    int ary[5] = {10, 20, 30, 40, 50};

    print_ary(ary);

    return 0;
}

void print_ary(int *pa)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d", pa[i]);
    }
}

//------------------------------------


/*크기가 다른 배열 출력하기*/

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};

    print_ary(ary1, 5);
    printf("\n");
    print_ary(ary2, 7);

    return 0;
}

void print_ary(int *pa, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
}

// //-----위에 수정
void print_ary(int *pa, int size);

int main(void)
{   int a, b;

    int ary1[] = {10, 20, 30, 40, 50};
    int ary2[] = {10, 20, 30, 40, 50, 60, 70};

    a = sizeof(ary1)/sizeof(ary1[0]);
    b = sizeof(ary2)/sizeof(ary2[0]);
  
    print_ary(ary1,a);
    printf("\n");
    print_ary(ary2,b);

    return 0;
}

void print_ary(int *pa, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d  ", pa[i]);
    }
}

/*아스키 코드*/

int main(void)
{
    char small, cap = 'G';
    if((cap >= 'A') && (cap <='Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("대문자 : %C %C", cap, '\n');
    printf("소문자 : %C", small);

    return 0;

}



/*버퍼 내용을 저장했다가 한번에 전달 하는 메모리*/
/*버퍼를 사용하는 문자 입력*/
int main()
{
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    return 0;
}