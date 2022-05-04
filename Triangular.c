#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void triangulo(int n, int i){
    if ((i * (i+1) * (i+2)) == n) printf("%d * %d * %d = %d\nVerdadeiro\n", i, i+1, i+2, n);

    else if ((i * (i+1) * (i+2)) < n) triangulo(n, i+1);

    else printf("Falso\n");

}

int main() {
    int n;

    scanf("%d", &n);

    triangulo(n, 1);

	return 0;
}