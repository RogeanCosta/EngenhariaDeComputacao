#include<stdio.h>

int maior(int a, int b)
{
    int maior;
    maior = (a + b + abs(a-b)) / 2;
    return maior;
}

int comparaAB(int a,int b)
{
    return maior(a, b);
}

int comparaAC(int a, int c)
{
    return maior(a, c);
}

int comparaBC(int b, int c)
{
    return maior(b, c);
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(comparaAB(a, b) == a)
    {
        if(comparaAC(a, c) == a)
        {
            printf("%d eh o maior\n", a);
        }

        else
        {
            printf("%d eh o maior\n", c);
        }
    }

    else
    {
        if (comparaBC(b, c) == b)
        {
            printf("%d eh o maior\n", b);
        }

        else
        {
            printf("%d eh o maior\n", c);
        }
    }

   return 0;
}
