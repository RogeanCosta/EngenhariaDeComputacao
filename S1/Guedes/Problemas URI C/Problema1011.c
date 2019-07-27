#include <stdio.h>

int main(void)
{
	double R;
	
	scanf("%lf", &R);
	
	printf("VOLUME = %.3lf\n", (4/3.0) * 3.14159 * R * R * R);
}
