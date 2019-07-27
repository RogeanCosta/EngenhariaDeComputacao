#include<stdio.h>

int horas(int N)
{
    return N / 3600;
}

int minutos(int N)
{
    return (N % 3600) / 60;
}

int segundos(int N)
{
    return (N % 3600) % 60;
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d:%d:%d\n", horas(N), minutos(N), segundos(N));
    return 0;
}
