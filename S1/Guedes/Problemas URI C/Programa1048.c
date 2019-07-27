#include<stdio.h>

int main()
{
    float salario;
    scanf("%f", &salario);

    if(salario <= 400.00) //15%
    {
        printf("Novo salario: %.2f\n", 1.15 * salario);
        printf("Reajuste ganho: %.2f\n", 0.15 * salario);
        printf("Em percentual: %d %%\n", 15);
    }

    else if(salario <= 800.00) //12%
    {
        printf("Novo salario: %.2f\n", 1.12 * salario);
        printf("Reajuste ganho: %.2f\n", 0.12 * salario);
        printf("Em percentual: %d %%\n", 12);
    }

    else if(salario <= 1200.00) //10%
    {
        printf("Novo salario: %.2f\n", 1.1 * salario);
        printf("Reajuste ganho: %.2f\n", 0.1 * salario);
        printf("Em percentual: %d %%\n", 10);
    }

    else if(salario <= 2000.00) //7%
    {
        printf("Novo salario: %.2f\n", 1.07 * salario);
        printf("Reajuste ganho: %.2f\n", 0.07 * salario);
        printf("Em percentual: %d %%\n", 7);
    }

    else // 4%
    {
        printf("Novo salario: %.2f\n", 1.04 * salario);
        printf("Reajuste ganho: %.2f\n", 0.04 * salario);
        printf("Em percentual: %d %%\n", 4);
    }

    return 0;
}
