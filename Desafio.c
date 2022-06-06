#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void ler(int n, int maior){
    if (n == 0){
        printf("%d", maior);
        return;
    }

    if (n > maior)
        maior = n;

    scanf("%d", &n);

    ler(n, maior);
}

int main() {
	int n;

	scanf("%d", &n);

	ler(n, 0);

	return 0;
}