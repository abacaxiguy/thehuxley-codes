#include <stdio.h>image.png
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Personagens{
	char nome[500];
	int matriz[5][5];
} Personagens;

int diagonal_primaria(int matriz[5][5]) {
	int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == j && matriz[i][j])) {
				soma += matriz[i][j];
            }
        }
    }

	return soma;
}

int diagonal_secundaria(int matriz[5][5]) {
    // + | 0 1 2 3 4
    // --------------
    // 0 | 0 1 2 3 4
    // 1 | 1 2 3 4 5
    // 2 | 2 3 4 5 6
	// 3 | 3 4 5 6 7
	// 4 | 4 5 6 7 8

    // if i + j == 4, então é uma diagonal secundária

	int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (((i + j) == 4)) {
				soma += matriz[i][j];
            }
        }
    }

	return soma;
}

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		Personagens p1, p2;

		scanf("%s", p1.nome);

		for (int j = 0; j < 5; j++){
			for (int k = 0; k < 5; k++){
				scanf("%d", &p1.matriz[j][k]);
			}
		}

		int somaP1 = diagonal_primaria(p1.matriz) + diagonal_secundaria(p1.matriz);

		scanf("%s", p2.nome);

		for (int j = 0; j < 5; j++){
			for (int k = 0; k < 5; k++){
				scanf("%d", &p2.matriz[j][k]);
			}
		}

		int somaP2 = diagonal_primaria(p2.matriz) + diagonal_secundaria(p2.matriz);

		if (somaP1 > somaP2){
			printf("%s venceu com image.pngvalor %d\n", p1.nome, somaP1);
		} else if (somaP1 < somaP2){
			printf("%s venceu com valor %d\n", p2.nome, somaP2);
		} else {
			printf("Empataram com o valor %d\n", somaP1);
		}
	}

	return 0;
}