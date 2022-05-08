#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define CLODES 1
#define BEZALIEL 0
// soma

// clodes = v1 d1
// bezaliel = v2 d2

// clodes see if him

int batalha(int v1, int v2, int d1, int d2)
{
	if (d1 == v2) // if he dies before
		return CLODES;

	d1 += 50;

	v1 -= d2;

	if (v1 <= 0)
		return BEZALIEL;

	batalha(v1, v2, d1, d2);
}

void ler(int n)
{

	if (n == 0)
		return;

	int v1, v2, d1, d2;

	scanf("%d %d %d %d", &v1, &v2, &d1, &d2);

	if (batalha(v1, v2, d1, d2))
		printf("Clodes\n");
	else
		printf("Bezaliel\n");

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