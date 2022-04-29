#include <stdio.h>

int main()
{
	double salario, reajuste, percentual;

	scanf("%lf", &salario);

	if (salario <= 280)
	{
		percentual = 0.2;
		reajuste = salario + (salario * percentual);
	}
	else if (salario < 700)
	{
		percentual = 0.15;
		reajuste = salario + (salario * percentual);
	}
	else if (salario < 1500)
	{
		percentual = 0.1;
		reajuste = salario + (salario * percentual);
	}
	else
	{
		percentual = 0.05;
		reajuste = salario + (salario * percentual);
	}

	printf("%.2lf\n%.lf\n%.2lf\n%.2lf\n", salario, percentual * 100, salario * percentual, reajuste);

	return 0;
}