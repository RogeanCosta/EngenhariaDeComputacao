#include <stdio.h>

int main(void)
{
	int peca1, qntd1, peca2, qntd2;
	float valor1, valor2;
	
	scanf("%d %d %f", &peca1, &qntd1, &valor1);
	scanf("%d %d %f", &peca2, &qntd2, &valor2);
	printf("VALOR A PAGAR: R$ %.2f\n", qntd1 * valor1 + qntd2 * valor2);
	
	return 0;
}
