#include <stdio.h>

int main()
{
	int codigo, qnt;
	double valor;

	scanf("%d%d", &codigo, &qnt);

	if (codigo == 1)
		valor = 5.3 * qnt;
	else if (codigo == 2)
		valor = 6 * qnt;
	else if (codigo == 3)
		valor = 3.2 * qnt;
	else
		valor = 2.5 * qnt;

	if (qnt >= 15 || valor >= 40)
		printf("R$ %.2lf\n", valor - (valor * 0.15));
	else
		printf("R$ %.2lf\n", valor);

	return 0;
}