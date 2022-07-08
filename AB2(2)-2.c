#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, m, k;

	scanf("%d %d", &n, &m);

	int tabuleiro[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &tabuleiro[i][j]);
		}
	}

	scanf("%d", &k);

	char movimento[k];

	for (int i = 0; i < k; i++) {
		scanf(" %c", &movimento[i]);
	}

	int destino_x, destino_y;

	scanf("%d %d", &destino_x, &destino_y);

	int x = 0, y = 0, cont = 0;

	for (int i = 0; i < k; i++) {

		if (x == destino_x && y == destino_y) {
			printf("Cheguei com %d movimentos\n", cont);
			return 0;
		}

		if (movimento[i] == 'C') {
			if (tabuleiro[x - 1][y] > 0 && (x - 1) >= 0) tabuleiro[x - 1][y]--;

			else if ((x - 1) >= 0) x--;

		} else if (movimento[i] == 'D') {
			if (tabuleiro[x][y + 1] > 0 && (y + 1) <= m - 1) tabuleiro[x][y + 1]--;

			else if ((y + 1) <= m - 1) y++;
		} else if (movimento[i] == 'B') {
			if (tabuleiro[x + 1][y] > 0 && (x + 1) <= n - 1) tabuleiro[x + 1][y]--;

			else if ((x + 1) <= n - 1) x++;

		} else if (movimento[i] == 'E') {
			if (tabuleiro[x][y - 1] > 0 && (y - 1) >= 0) tabuleiro[x][y - 1]--;

			else if ((y - 1) >= 0) y--;
		}

		cont++;

		if (x == destino_x && y == destino_y) {
			printf("Cheguei com %d movimentos\n", cont);
			return 0;
		}
	}

	if (x == destino_x && y == destino_y) {
		printf("Cheguei com %d movimentos\n", cont);
	} else {
		printf("Nao cheguei\n");
	}

	return 0;
}