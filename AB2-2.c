#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_bits(int len, int bits[], int i){
	if (i >= len) return;

	int bitTemp;

	scanf("%d", &bitTemp);

	bits[i] = bitTemp;

	ler_bits(len, bits, i + 1);
}

// uma sequencia se caracteriza em ver se o numero anterior (se tiver um)
// é diferente do numero atual, se for +1

// 0 1 1 0 1
// ^ anterior (nao tem) é diferente do atual? nao conta, lembre-se q a
// 														sequencia começa em 1

// x ^ anterior (0) é diferente do atual? sim + 1

// x x ^ anterior (1) é diferente do atual? nao

// x x x ^ anterior (1) é diferente do atual? sim + 1

// x x x x ^ anterior (0) é diferente do atual? sim + 1

int contar_sequencia(int len, int bits[], int i, int sequencia, int max){

	if (len < 1 || i >= len){
		if (sequencia > max) max = sequencia;
		return max;
	} 

	if (i != 0){
		if (bits[i - 1] != bits[i])
			sequencia++;
		else {
			if (sequencia > max) max = sequencia;
			sequencia = 1;
		}
	}

	contar_sequencia(len, bits, i + 1, sequencia, max);
}

void ler(int n, int i, int max){
	if (i >= n) {
		printf("%d\n", max);
		return;
	}

	int len;

	scanf("%d", &len);

	int bits[len];

	ler_bits(len, bits, 0);

	int sequencia = contar_sequencia(len, bits, 0, 1, 1);

	if (sequencia > max) max = sequencia;

	ler(n, i + 1, max);
}

int main() {
	int n;

	scanf("%d", &n);

	ler(n, 0, 0);

	return 0;
}