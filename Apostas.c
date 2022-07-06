#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n;

	scanf("%d", &n);

	int apostas[n][11];
	int len_apostas[n];

	for (int i = 0; i < n; i++) {
		int k;

		for (k = 0; k < 10; k++) {
			scanf("%d", &apostas[i][k]);
			char virgula;
			scanf("%c", &virgula);
			if (virgula != ',') {
				len_apostas[i] = k;	
				break;
			}
		}
	}

	int gabarito[7];

	for (int i = 0; i < 6; i++) {
		scanf("%d", &gabarito[i]);
	}

	int ganhadores = 0;

	for (int i = 0; i < n; i++){
		int acertos = 0;
		for (int j = 0; j <= len_apostas[i]; j++) {
			if (apostas[i][j] == gabarito[acertos]) acertos++;
		}
		if (acertos >= 6) ganhadores++;
	}

	printf("Total de ganhadores: %d\n", ganhadores);

	return 0;
}