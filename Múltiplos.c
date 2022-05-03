#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void multiplos(int n, int a, int b)
{
	n = n + n;

	if (a <= n && b <= n)
	{
		return;
	}

	printf("%d\n", n);
	multiplos(n, a, b);
}

int main()
{
	int n, a, b, novo_n;

	scanf("%d\n%d\n%d", &n, &a, &b);

	if (n > a && n > b)
		printf("INEXISTENTE\n");

	multiplos(n, a, b);

	return 0;
}