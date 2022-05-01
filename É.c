#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo(int n, int p)
{
	if (n == 1)
		return 0;

	else
	{
		p--;

		if (p == 1)
			return 1;

		else if (n % p == 0)
			return 0;
		else
			primo(n, p);
	}
}

void ler()
{
	int n;

	scanf("%d", &n);

	if (n == -1)
		return;

	else
	{
		int p;

		p = primo(n, n);

		printf("%d\n", p);

		ler();
	}
}

int main()
{

	ler();

	return 0;
}
