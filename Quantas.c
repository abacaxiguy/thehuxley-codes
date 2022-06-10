#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int quantos_x(int array[], int x, int i, int vezes){
    if (i > 9) return vezes;

    if(array[i] == x) vezes++;

    quantos_x(array, x, i + 1, vezes);
}


void ler(int i, int numeros[]){
	if (i > 9) {
        int x, vezes;
        scanf("%d", &x);
        vezes = quantos_x(numeros, x, 0, 0);
        printf("%d\n", vezes);
        return;
    }
    int n;
    scanf("%d", &numeros[i]);

    ler(i + 1, numeros);
}

int main() {
    int numeros[10];

    ler(0, numeros);

	return 0;
}