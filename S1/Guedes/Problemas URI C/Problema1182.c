#include <stdio.h>

int main()
{
    float M[12][12], resultado = 0;
    int i, j, C;
    char T;

    scanf("%d", &C);
    getchar();
    scanf("%c", &T);
    for(i = 0; i < 12; i++)
    {
        for(j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    if(T == 'S')
    {
        for(i = 0; i < 12; i++)
        {
            resultado = resultado + M[i][C];
        }

        printf("%.1f\n", resultado);
    }

    else if(T == 'M')
    {
        for(i = 0; i < 12; i++)
        {
            resultado = resultado + M[i][C];
        }

        printf("%.1f\n", resultado / 12);
    }

    return 0;
}
