#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double salario, renda, maximo = 0;

	scanf("%lf%lf", &salario, &renda);

	if (renda < (salario * 0.3))
		maximo = (salario * 0.3) - renda;

	printf("%.2lf\n", maximo);

	return 0;
}