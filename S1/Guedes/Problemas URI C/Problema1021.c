#include<stdio.h>
#include<math.h>

int cinquentinha(int decimal)
{
    return decimal/50;
}

int VinteCinco(int decimal)
{
    return (decimal % 50) / 25;
}

int DezCents(int decimal)
{
    return ((decimal % 50) % 25) / 10;
}

int CincoCents(int decimal)
{
    return (((decimal % 50) % 25) % 10) / 5;
}

int UmCent(int decimal)
{
    return ((((decimal % 50) % 25) % 10) % 5) / 1;
}

int main()
{
    float valor;
    int inteira;
    int decimal;

    scanf("%f", &valor);

    inteira = valor;
    decimal = round(100 * (valor - inteira));

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", inteira / 100);
    printf("%d nota(s) de R$ 50.00\n", (inteira % 100) / 50);
    printf("%d nota(s) de R$ 20.00\n", ((inteira % 100) % 50) / 20);
    printf("%d nota(s) de R$ 10.00\n", (((inteira % 100) % 50) % 20) / 10);
    printf("%d nota(s) de R$ 5.00\n", ((((inteira % 100) % 50) % 20) % 10) / 5);
    printf("%d nota(s) de R$ 2.00\n", (((((inteira % 100) % 50) % 20) % 10) % 5) / 2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", ((((((inteira % 100) % 50) % 20) % 10) % 5) % 2) / 1);
    printf("%d moeda(s) de R$ 0.50\n", cinquentinha(decimal));
    printf("%d moeda(s) de R$ 0.25\n", VinteCinco(decimal));
    printf("%d moeda(s) de R$ 0.10\n", DezCents(decimal));
    printf("%d moeda(s) de R$ 0.05\n", CincoCents(decimal));
    printf("%d moeda(s) de R$ 0.01\n", UmCent(decimal));


    return 0;
}
