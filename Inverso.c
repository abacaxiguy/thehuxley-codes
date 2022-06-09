#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imprime_array(int *array, int vezes, int i){
    (i == vezes - 1) ? printf("%d\n", array[i]) : printf("%d ", array[i]);

    if (i == vezes - 1) return;

    imprime_array(array, vezes, i + 1);
}

void ler(int vezes, int *array, int i){
	if (i <= 0){
        imprime_array(array, vezes, 0);
        return;
    }

    int n_temp;

    scanf("%d", &n_temp);
    array[i-1] = n_temp;

    ler(vezes, array, i-1);
}

int main() {
	int n;

	scanf("%d", &n);

	int array[n];

	ler(n, array, n);

	return 0;
}