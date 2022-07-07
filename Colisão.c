#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int l, c;

	scanf("%d %d", &l, &c);

	int labirinto[l][c];

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &labirinto[i][j]);
		}
	}

	int qnt_comandos;

	scanf("%d", &qnt_comandos);

	char comandos[qnt_comandos];

	for (int k = 0; k < qnt_comandos; k++) {
		scanf(" %c", &comandos[k]);
	}

	int x, y;

	scanf("%d %d", &x, &y);

	for (int i = 0; i < qnt_comandos; i++) {
		if (comandos[i] == 'D') {
			if (labirinto[x][y + 1] && (y + 1) <= c - 1) y++;
		} 

		else if (comandos[i] == 'E') {
			if (labirinto[x][y - 1] && (y - 1) >= 0) y--;
		} 

		else if (comandos[i] == 'C') {
			if (labirinto[x - 1][y] && (x - 1) >= 0) x--; 
		}

		else if (comandos[i] == 'B') {
			if (labirinto[x + 1][y] && (x + 1) <= l - 1) x++;
		} 
	}

	printf("(%d,%d)\n", x, y);

	return 0;
}