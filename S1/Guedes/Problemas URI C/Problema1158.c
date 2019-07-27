#include<stdio.h>
#include<math.h>

int main()
{
    int N, X, Y, soma;

    scanf("%d", &N);

    while(N > 0)
    {
        soma = 0;
        scanf("%d %d", &X, &Y);
        while(Y != 0)
        {
            if(abs(X) % 2 == 1)
            {
                soma = X + soma;
                Y--;
            }

            X++;
        }

        printf("%d\n", soma);
        N--;
    }
    return 0;
}

