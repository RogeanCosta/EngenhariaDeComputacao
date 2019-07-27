#include<stdio.h>

int main(void)
{
    int tempo, velocidade;
    float distancia;

    scanf("%d", &tempo);
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;

    printf("%.3f\n", distancia/12.0);

    return 0;
}
