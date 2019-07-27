#include <stdio.h>

int main(void)
{
    float num;
    int positivos = 0, i;
    for(i = 1; i <= 6; i++)
    {
        scanf("%f", &num);
        if(num > 0)
        {
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);
    return 0;
}
