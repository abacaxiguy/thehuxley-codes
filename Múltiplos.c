#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void multiplos(int old_n, int a, int b, int i)
{
	int temp;

	temp = old_n * i;

	if (temp > a && temp > b)
	{
		return;
	}

	printf("%d\n", temp);
	multiplos(old_n, a, b, i + 1);
}

int main()
{
	int n, a, b;

	scanf("%d\n%d\n%d", &n, &a, &b);

	if (n > a && n > b)
		printf("INEXISTENTE\n");

	multiplos(n, a, b, 2);

	return 0;
}