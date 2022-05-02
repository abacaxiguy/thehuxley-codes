#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Classe 1 = Guerreiro
// Classe 2 = Mago
// Classe 3 = Arqueiro

void bonus_time(int c1, int c2, double *v1, double *v2, double *a1, double *a2)
{
	// G vs A
	if (c1 == 1 && c2 == 3)
		*v1 *= 1.3;
	else if (c1 == 3 && c2 == 1)
		*v2 *= 1.3;

	// A vs M
	else if (c1 == 3 && c2 == 2)
		*a1 *= 1.25;
	else if (c1 == 2 && c2 == 3)
		*a2 *= 1.25;

	// M vs G
	else if (c1 == 2 && c2 == 1)
	{
		*v1 *= 1.15;
		*a1 *= 1.15;
	}
	else if (c1 == 1 && c2 == 2)
	{
		*v2 *= 1.15;
		*a2 *= 1.15;
	}
}

int fight(int cPedro, double aPedro, double vPedro, int cTulio, double aTulio, double vTulio)
{
	// Bonus Time
	bonus_time(cPedro, cTulio, &vPedro, &vTulio, &aPedro, &aTulio);

	// Phase Attack
	if (vPedro > vTulio)
	{
		vPedro -= aTulio;

		if (vPedro > 0)
		{
			vTulio -= aPedro;
		}
	}
	else
	{
		vTulio -= aPedro;

		if (vTulio > 0)
		{
			vPedro -= aTulio;
		}
	}

	// RETURN 0 = SE TULIO VENCEU
	// RETURN 1 = SE PEDRO VENCEU

	if (vPedro <= 0)
		return 0;
	else if (vTulio <= 0)
		return 1;
	else
	{
		if (vPedro > vTulio)
			return 1;
		else if (vTulio > vPedro)
			return 0;
		else
		{
			if (aPedro > aTulio)
				return 1;
			else
				return 0;
		}
	}
}

int main()
{

	int claP1, claP2, claP3, claT1, claT2, claT3;
	int vencedor1, vencedor2, vencedor3;
	double atkP1, atkP2, atkP3, atkT1, atkT2, atkT3, vidaP1, vidaP2, vidaP3, vidaT1, vidaT2, vidaT3;

	scanf("%d %lf %lf\n", &claP1, &atkP1, &vidaP1);
	scanf("%d %lf %lf\n", &claP2, &atkP2, &vidaP2);
	scanf("%d %lf %lf\n", &claP3, &atkP3, &vidaP3);
	scanf("%d %lf %lf\n", &claT1, &atkT1, &vidaT1);
	scanf("%d %lf %lf\n", &claT2, &atkT2, &vidaT2);
	scanf("%d %lf %lf\n", &claT3, &atkT3, &vidaT3);

	vencedor1 = fight(claP1, atkP1, vidaP1, claT1, atkT1, vidaT1);
	if (vencedor1)
		printf("Rodada1: Pedro\n");
	else
		printf("Rodada1: Tulio\n");

	vencedor2 = fight(claP2, atkP2, vidaP2, claT2, atkT2, vidaT2);

	if (vencedor2)
		printf("Rodada2: Pedro\n");
	else
		printf("Rodada2: Tulio\n");

	vencedor3 = fight(claP3, atkP3, vidaP3, claT3, atkT3, vidaT3);

	if (vencedor3)
		printf("Rodada3: Pedro\n");
	else
		printf("Rodada3: Tulio\n");

	if ((vencedor1 + vencedor2 + vencedor3) >= 2)
		printf("Pedro vitorioso\n");
	else
		printf("Tulio vitorioso\n");

	return 0;
}