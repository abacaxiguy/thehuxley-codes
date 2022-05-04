#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divisores(int old_n, int i, int div){
    if(i == old_n) {
        if (old_n % 3 == 0) div++;
        return div;
    }
    else if (i < old_n){
        if ((i % 3) == 0 && (old_n % i) == 0) div++;
        divisores(old_n, i+1, div);
    }
}

int main() {
    int n, d;

    scanf("%d", &n);

    d = divisores(n, 1, 0);

    if(d == 0) printf("O numero nao possui divisores multiplos de 3!\n");
    else printf("%d\n", d);

	return 0;
}