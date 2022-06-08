#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler(int vezes, int max, int atual){
    if(vezes <= 0){
        printf("N");
        return;
    }

    int s, e;
    scanf("%d %d", &s, &e);

    atual -= s;
    atual += e;

    if(atual > max){
        printf("S");
        return;
    }

    ler(vezes - 1, max, atual);
}

int main() {
	int n, max;

	scanf("%d %d", &n, &max);

	ler(n, max, 0);

	return 0;
}