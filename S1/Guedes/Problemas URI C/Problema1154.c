#include<stdio.h>

int main()
{
    float soma = 0;
    int idades, i=0;

    while(1)
    {
        scanf("%d", &idades);

        if(idades < 0)
            break;

        soma = soma + idades;
        i++;
    }

    printf("%.2f\n", soma/i);
    return 0;
}
