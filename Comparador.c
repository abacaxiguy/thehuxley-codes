#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x, y;

	scanf("%d %d", &x, &y);

	printf("%i\n", x > y);
	printf("%i\n", x == y);
	printf("%i\n", x < y);
	printf("%i\n", x != y);
	printf("%i\n", x >= y);
	printf("%i\n", x <= y);

	return 0;
}