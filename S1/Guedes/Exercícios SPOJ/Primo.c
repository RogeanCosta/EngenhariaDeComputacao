#include <stdio.h>

int eh_primo(int num)
{
    int i, contador = 0;

    for(i = 1.0; i <= num; i++)
    {
        if(num % i == 0)
            contador++;
    }

    return contador;
}


int main(void)
{
    int N;

    scanf("%d", &N);
    if(eh_primo(N) == 2)
        printf("sim");
    else
        printf("nao");

    return 0;
}
