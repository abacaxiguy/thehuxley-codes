#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, m, o;
	// n = numero de casas do tabuleiro
	// m = numero de jogadores
	// o = numero de rodadas

	// o * m = numero de jogadas
	// v = valor do dado

	scanf("%d %d %d", &n, &m, &o);
	
	int tabuleiro[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &tabuleiro[i]);
	}

	int casa_jogador[m];

	for (int i = 0; i < m; i++) {
		casa_jogador[i] = 0;
	}

	for (int i = 0; i < o; i++) {
		int dado[m];

		for (int j = 0; j < m; j++)
		{
			scanf("%d", &dado[j]);
		}

		for (int k = 0; k < m; k++) {
			casa_jogador[k] += dado[k];

			if (casa_jogador[k] >= n) casa_jogador[k] = casa_jogador[k] % n;

			else if (casa_jogador[k] < 0) casa_jogador[k] = n + casa_jogador[k];
		
			casa_jogador[k] += tabuleiro[casa_jogador[k]];

			if (casa_jogador[k] >= n) casa_jogador[k] = casa_jogador[k] % n;

			else if (casa_jogador[k] < 0) casa_jogador[k] = n + casa_jogador[k];
		}
	}

	for (int i = 0; i < m; i++) {
		printf("%d\n", casa_jogador[i]);
	}
}