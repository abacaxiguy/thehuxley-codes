#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler(int carros, double valorTotal, int casas){
	if (carros == 999){
        printf("%.2lf\n%d", valorTotal, casas);
        return;
    }

    if(carros > 2){
        casas++;
        valorTotal += 12.89 * (carros - 2);
    }

    scanf("%d", &carros);

    ler(carros, valorTotal, casas);
}

int main() {
    int carros;

    scanf("%d", &carros);

    ler(carros, 0, 0);

    return 0;
}