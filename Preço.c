#include <stdio.h>

int main()
{
	double litros;
	char tipo;

	scanf("%lf\n%c", &litros, &tipo);

	if (tipo == 'A')
	{
		if (litros <= 20)
			printf("R$ %.2lf\n", (litros * 1.9) - ((1.9 * 0.03) * litros));
		else
			printf("R$ %.2lf\n", (litros * 1.9) - ((1.9 * 0.05) * litros));
	}
	else if (tipo == 'G')
	{
		if (litros <= 20)
			printf("R$ %.2lf\n", (litros * 2.5) - ((2.5 * 0.04) * litros));
		else
			printf("R$ %.2lf\n", (litros * 2.5) - ((2.5 * 0.06) * litros));
	}
	else if (tipo == 'D')
	{
		if (litros <= 25)
			printf("R$ %.2lf\n", litros * 1.66);
		else
			printf("R$ %.2lf\n", (litros * 1.66) - ((1.66 * 0.04) * litros));
	}

	return 0;
}