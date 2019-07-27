#include <stdio.h>

int main(void)
{
	int numero, horas;
	float salario;
	
	scanf("%d", &numero);
	scanf("%d", &horas);
	scanf("%f", &salario);
	
	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2f\n", horas * salario);
	
	return 0;
}
