#include <stdio.h>
#include <math.h>

double delta(double A,double B, double C)
{
    double delta;
    delta = (pow(B,2)) - 4 * A * C;
    return delta;
}

double raiz_1(double A, double B, double delta)
{
    double raiz;
    raiz = (-B + sqrt(delta)) / (2 * A);
    return raiz;
}

double raiz_2(double A, double B, double delta)
{
    double raiz;
    raiz = (-B - sqrt(delta)) / (2 * A);
    return raiz;
}


int main(void)
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(delta(A, B, C) < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }

    else
    {
        printf("R1 = %.5lf\n", raiz_1(A, B, delta(A, B, C)));
        printf("R2 = %.5lf\n", raiz_2(A, B, delta(A, B, C)));
    }

    return 0;
}
