#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int euclides(int a, int b)
{

	if (b == 0)
	{
		return a;
	}

	return euclides(b, a % b);
}

int main()
{
	int a, b, mdc;

	scanf("%d %d", &a, &b);

	mdc = euclides(a, b);

	printf("%d\n", mdc);

	return 0;
}