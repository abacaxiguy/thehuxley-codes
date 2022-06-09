#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maior_do_array(int *array, int i, int max){
    if (i > 5) return max;

    if (array[i] >= max) max = array[i];

    maior_do_array(array, i + 1, max);
}

int menor_do_array(int *array, int i, int min){
    if (i > 5) return min;

    if (array[i] <= min) min = array[i];

    menor_do_array(array, i + 1, min);
}

int main() {
	int v1, v2, v3, v4, v5, v6;
    int array[6];
    int maior, menor;

    scanf("%d %d %d %d %d %d", &v1, &v2, &v3, &v4, &v5, &v6);

    array[0] = v1;
    array[1] = v2;
    array[2] = v3;
    array[3] = v4;
    array[4] = v5;
    array[5] = v6;

    maior = maior_do_array(array, 0, array[0]);
    menor = menor_do_array(array, 0, array[0]);

    printf("%d\n%d\n", menor, maior);

	return 0;
}