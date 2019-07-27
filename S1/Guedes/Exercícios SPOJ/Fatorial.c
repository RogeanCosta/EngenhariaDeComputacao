#include "stdio.h"

int factorial(int num)
{
    int i, res = 1;
    for(i = 1; i <= num; num--)
    {
        res = res * num;
    }

    return res;
}

int main(void)
{
    int N;

    scanf("%d", &N);
    printf("%d", factorial(N));

    return 0;
}
