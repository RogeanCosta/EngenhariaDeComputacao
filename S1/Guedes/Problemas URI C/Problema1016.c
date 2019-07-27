#include<stdio.h>

int main()
{
    int dist, tempo = 0;

    scanf("%d", &dist);
    while(dist != 0)
    {
        tempo = tempo + 2;
        dist--;
    }

    printf("%d minutos\n", tempo);
    return 0;
}
