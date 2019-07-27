#include<stdio.h>

int main()
{
    int N, i, j, valor;
    while(1)
    {
        scanf("%d", &N);
        if(N ==0)
            break;
        int M[N][N];

        for(i = 1; i <= N; i++)
        {
            for(j = 1; j <= N; j++)
            {
                valor = i;
                if(j < valor)
                {
                    valor = j;
                }
                if(N-i+1 < valor)
                {
                    valor = N-i+1;
                }
                if(N-j+1 < valor)
                {
                    valor = N-j+1;
                }

                M[i-1][j-1] = valor;

            }
        }

         for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(j != N - 1)
                {
                    printf("%3d ", M[i][j]);
                }

                else
                {
                    printf("%3d\n", M[i][j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
