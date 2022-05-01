#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fight(int c1, int c2, double a1, double a2, double v1, double v2)
{
}

int main()
{

	int claP, claT;
	int vencedor1, vencedor2, vencedor3;
	double atkP, atkT, vidaP, vidaT;

	scanf("%d %lf %lf\n", &claP, &atkP, &vidaP);
	scanf("%d %lf %lf\n", &claT, &atkT, &vidaT);

	vencedor1 = fight(claP, atkP, vidaP, claT, atkT, vidaT);

	if (vencedor1)
		printf("Rodada1: Pedro\n");
	else
		printf("Rodada1: Tulio\n");

	scanf("%d %lf %lf\n", &claP, &atkP, &vidaP);
	scanf("%d %lf %lf\n", &claT, &atkT, &vidaT);

	vencedor2 = fight(claP, atkP, vidaP, claT, atkT, vidaT);

	if (vencedor2)
		printf("Rodada1: Pedro\n");
	else
		printf("Rodada1: Tulio\n");

	scanf("%d %lf %lf\n", &claP, &atkP, &vidaP);
	scanf("%d %lf %lf\n", &claT, &atkT, &vidaT);

	vencedor3 = fight(claP, atkP, vidaP, claT, atkT, vidaT);

	if (vencedor3)
		printf("Rodada1: Pedro\n");
	else
		printf("Rodada1: Tulio\n");

	return 0;
}