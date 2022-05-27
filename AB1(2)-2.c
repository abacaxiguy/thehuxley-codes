#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// perfect = primo + fibonacci
// almost perfect = primo || fibonacci

int eh_primo(int n, int p)
{
	if (n == 1)
		return 0;

	p--;

	if (p == 1)
		return 1;

	else if (n % p == 0)
		return 0;

	return eh_primo(n, p);
}

int eh_fibonacci(int n, int p, int x)
{
	if (n + p == x || p == x || n == x)
		return 1;
	if (n + p > x)
		return 0;
	return eh_fibonacci(p, n + p, x);
}

void ler(int n)
{
	if (n == 0)
		return;

	int kcaj, ordep, pontos_kcaj = 0, pontos_ordep = 0;
	scanf("%d %d", &kcaj, &ordep);

	if (eh_primo(kcaj, kcaj) && eh_fibonacci(0, 1, kcaj))
		pontos_kcaj += 3;
	else if (eh_primo(kcaj, kcaj) || eh_fibonacci(0, 1, kcaj))
		pontos_kcaj++;

	if (eh_primo(ordep, ordep) && eh_fibonacci(0, 1, ordep))
		pontos_ordep += 3;
	else if (eh_primo(ordep, ordep) || eh_fibonacci(0, 1, ordep))
		pontos_ordep++;

	if (pontos_kcaj == pontos_ordep)
	{
		if (kcaj > ordep)
			pontos_kcaj++;
		else
			pontos_ordep++;
	}

	pontos_kcaj > pontos_ordep ? printf("Kcaj\n") : printf("Ordep\n");

	n--;

	ler(n);
}

int main()
{
	int n;

	scanf("%d", &n);

	ler(n);

	return 0;
}