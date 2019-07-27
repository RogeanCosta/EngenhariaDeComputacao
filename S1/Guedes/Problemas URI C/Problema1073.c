#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, i;
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d^2 = %.0f\n", i, pow(i,2));
        }
    }

    return 0;
}
