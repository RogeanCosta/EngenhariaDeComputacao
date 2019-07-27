#include<stdio.h>

int main()
{
    int valor1, valor2, valor3, aux, i = 0;
    int vetor[3];
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    vetor[0] = valor1;
    vetor[1] = valor2;
    vetor[2] = valor3;

    while(valor1 > valor2 || valor2 > valor3)
    {
        while(valor1 > valor2)
        {
            aux = valor1;
            valor1 = valor2;
            valor2 = aux;
        }

        while(valor2 > valor3)
        {
            aux = valor2;
            valor2 = valor3;
            valor3 = aux;
        }
    }

    printf("%d\n", valor1);
    printf("%d\n", valor2);
    printf("%d\n\n", valor3);

    while(i < 3)
    {
        printf("%d\n", vetor[i]);
        i++;
    }

    return 0;
}
