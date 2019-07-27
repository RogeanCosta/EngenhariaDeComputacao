#include<stdio.h>

int main()
{
    int inicio, fim, periodo;
    scanf("%d %d", &inicio, &fim);

    if(inicio == fim)
    {
        periodo = 24;
    }

    else if(fim < inicio)
    {
        periodo = (fim + 24) - inicio;
    }

    else
    {
        periodo = fim - inicio;
    }

    printf("O JOGO DUROU %d HORA(S)\n", periodo);

    return 0;
}
