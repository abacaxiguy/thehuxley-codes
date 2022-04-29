#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int genero, idade;

	scanf("%d\n%d", &genero, &idade);

	printf("%i\n", !genero && idade);

	return 0;
}