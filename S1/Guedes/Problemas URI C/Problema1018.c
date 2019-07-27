#include<stdio.h>

int garoupa(int valor)
{
    return valor/100;
}

int onca(int valor)
{
    return (valor % 100) / 50;
}

int mico_leao(int valor)
{
    return ((valor % 100) % 50) / 20;
}

int arara(int valor)
{
    return (((valor % 100) % 50) % 20) / 10;
}

int flamingo(int valor)
{
    return ((((valor % 100) % 50) % 20) % 10) / 5;
}

int tartaruga(int valor)
{
    return (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
}

int beija_flor(int valor)
{
    return ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;
}
int main()
{
    int valor;
    scanf("%d", &valor);

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", garoupa(valor));
    printf("%d nota(s) de R$ 50,00\n", onca(valor));
    printf("%d nota(s) de R$ 20,00\n", mico_leao(valor));
    printf("%d nota(s) de R$ 10,00\n", arara(valor));
    printf("%d nota(s) de R$ 5,00\n", flamingo(valor));
    printf("%d nota(s) de R$ 2,00\n", tartaruga(valor));
    printf("%d nota(s) de R$ 1,00\n", beija_flor(valor));

    return 0;
}
