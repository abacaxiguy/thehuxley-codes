#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double l1, l2, l3;

	scanf("%lf\n%lf\n%lf", &l1, &l2, &l3);

	if (l1 == l2 && l2 == l3)
		printf("equilatero\n");
	else if (l1 == l2 || l2 == l3 || l1 == l3)
		printf("isosceles\n");
	else
		printf("escaleno\n");

	return 0;
}