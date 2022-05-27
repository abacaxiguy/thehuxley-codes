#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define KCAJ 1
#define ORDEP 0

// ORDEP - HABILIDADE
// IF VIDA_ORDEP > ATK_ORDEP

// INTERMEDIARIO_ORDEP = VIDA_ORDEP
// VIDA_ORDEP = ATK_ORDEP
// ATK_ORDEP = INTERMEDIARIO_ORDEP

// KCAJ - HABILIDADE
// IF VIDA_KCAJ % 2 != 0

// ATK_KCAJ += 5

// if (eh_primo(rodada, rodada)) kcaj nao joga
// if (eh_potencia_de_dois(rodada, 1)) ordep nao joga tbm

int eh_primo(int n, int p)
{
	if (n == 1)
		return 0;

	p--;

	if (p == 1)
		return 1;

	else if (n % p == 0)
		return 0;

	return eh_primo(n, p);
}

int eh_potencia_de_dois(int n, int i)
{
	if ((double)n == pow(2.0, (double)i))
		return 1;

	else if ((double)n < pow(2.0, (double)i))
		return 0;

	return eh_potencia_de_dois(n, i + 1);
}

void habilidade_ordep(int *vida, int *atk)
{
	if (*vida > *atk)
	{
		int intermediario;
		intermediario = *vida;
		*vida = *atk;
		*atk = intermediario;
	}
}

void habilidade_kcaj(int vida, int *atk)
{
	if (vida % 2 != 0)
		*atk += 5;
}

int batalha(int atk_ordep, int vida_ordep, int atk_kcaj, int vida_kcaj, int rodada)
{

	if (!eh_potencia_de_dois(rodada, 0))
	{
		habilidade_ordep(&vida_ordep, &atk_ordep);
		vida_kcaj -= atk_ordep;
		if (vida_kcaj <= 0)
			return ORDEP;
	}

	if (!eh_primo(rodada, rodada))
	{
		habilidade_kcaj(vida_kcaj, &atk_kcaj);
		vida_ordep -= atk_kcaj;

		if (vida_ordep <= 0)
			return KCAJ;
	}

	batalha(atk_ordep, vida_ordep, atk_kcaj, vida_kcaj, rodada + 1);
}

void ler(int n, int vitorias_kcaj, int vitorias_ordep)
{
	if (n == 0)
	{
		if (vitorias_kcaj > vitorias_ordep)
			printf("kcaj ganhou %d coffees\n", vitorias_kcaj);
		else if (vitorias_ordep > vitorias_kcaj)
			printf("ordep ganhou %d coffees\n", vitorias_ordep);
		else
			printf("F coffees\n");
		return;
	}

	int atk_ordep, vida_ordep, atk_kcaj, vida_kcaj;

	scanf("%d %d", &atk_ordep, &vida_ordep);
	scanf("%d %d", &atk_kcaj, &vida_kcaj);

	if (batalha(atk_ordep, vida_ordep, atk_kcaj, vida_kcaj, 1) == KCAJ)
	{
		vitorias_kcaj++;
	}
	else
		vitorias_ordep++;

	n--;

	ler(n, vitorias_kcaj, vitorias_ordep);
}

int main()
{
	int n;

	scanf("%d", &n);

	ler(n, 0, 0);

	return 0;
}