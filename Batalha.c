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

int batalha(double rodadas, int d1, int v2, int aumenta_dano)
{
	// se o clodes ver que da pra matar ele com o restante dos ataques antes dele morrer, ele começa a atacar, se n, ele só tenta aumentar seu poder

	// if vida_BEZALIEL / dano_CLODES >= rodadas_restantes, ele ganhou

	// entao teremos rodadas
	// pq?, pq bezaliel smp vai ter um ataque fixo, entao dá pra separar as rodadas = vida_CLODES / dano_BEZALIEL
	if (aumenta_dano == rodadas)
		return BEZALIEL;

	if ((rodadas - aumenta_dano) * (50 * aumenta_dano + d1) >= v2)
		return CLODES;

	batalha(rodadas, d1, v2, aumenta_dano + 1);
}

void ler(int n)
{

	if (n == 0)
		return;

	int v1, v2, d1, d2;

	scanf("%d %d %d %d", &v1, &v2, &d1, &d2);

	double rodadas_ate_clodes_morrer = ceil((double)v1 / d2);

	if (batalha(rodadas_ate_clodes_morrer, d1, v2, 0))
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