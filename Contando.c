#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digitos(int n, int pares)
{
	int resto_atual;
	if (n <= 9)
	{
		if (n % 2 == 0)
			return pares + 1;
		return pares;
	}
	else
	{
		resto_atual = n % 10;
		if (resto_atual % 2 == 0)
			pares++;

		n /= 10;

		digitos(n, pares);
	}
}

int main()
{
	int n, resultado;

	scanf("%d", &n);

	resultado = digitos(n, 0);

	printf("%d\n", resultado);

	return 0;
}