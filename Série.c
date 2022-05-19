#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int n)
{
	if (n == 0)
		return 1;

	return n * fatorial(n - 1);
}

int eh_primo(int n, int p)
{
	if (n == 1)
		return 1;

	p--;

	if (p == 1)
		return 1;

	else if (n % p == 0)
		return 0;

	return eh_primo(n, p);
}

int proximo_primo(int n)
{
	if (eh_primo(n, n))
		return n;

	proximo_primo(n + 1);
}

double calcular(double x)
{
	return (double)fatorial(x) / (double)proximo_primo(x);
}

void ler(int vezes, int i, double resultado)
{
	if (i > vezes)
	{
		(vezes == 0) ? printf("%.2lf\n", resultado) : printf("\n%.2lf\n", resultado);
		return;
	}

	resultado += calcular(i);

	(i == 1) ? printf("%d!/%d", i, proximo_primo(i)) : printf(" + %d!/%d", i, proximo_primo(i));

	i++;

	ler(vezes, i, resultado);
}

int main()
{
	int vezes;
	double resultado = .0;

	scanf("%d", &vezes);

	ler(vezes, 1, resultado);

	return 0;
}