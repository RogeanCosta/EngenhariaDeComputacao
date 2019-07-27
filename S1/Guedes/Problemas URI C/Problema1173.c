#include<stdio.h>

int main()
{
    int valor, vetor[10], i;
    scanf("%d", &valor);
    vetor[0] = valor;
    for(i = 1; i < 10; i++)
    {
        vetor[i] = 2 * vetor[i - 1];
    }

    for(i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
