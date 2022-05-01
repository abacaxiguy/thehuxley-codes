#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sonhos(int n, int vezes)
{
	if (vezes > 2)
	{
		sonhos(n + 3 + (n + 3) % 5, vezes - 2);
	}
	else if (vezes <= 2)
	{
		if (vezes == 1)
			return n + 3;
		else if (vezes == 2)
			return n + 3 + (n + 3) % 5;
		else
			return n;
	}
}

int main()
{
	int n, vezes, s;

	scanf("%d %d", &n, &vezes);

	s = sonhos(n, vezes);

	printf("%d\n", s);

	return 0;
}