#include <stdio.h>

int main(void)
{
    int v, teste = 1, I, J ,K , L;
    while(1)
    {
        scanf("%d", &v);

        if(v == 0)
            return 0;

        I = v / 50;
        J =(v % 50) / 10;
        K =((v % 50) % 10) / 5;
        L = (((v % 50) % 10) % 5) / 1;

        printf("Teste %d\n", teste++);
        printf("%d %d %d %d\n", I, J, K, L);
    }

    return 0;
}
