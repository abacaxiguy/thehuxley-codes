#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int qnt_enfeite1, qnt_enfeite2, qnt_enfeite3;
    double valor_arvore, valor_enfeite1, valor_enfeite2, valor_enfeite3, total;

    scanf("%lf", &valor_arvore);
    scanf("%d %lf", &qnt_enfeite1, &valor_enfeite1);
    scanf("%d %lf", &qnt_enfeite2, &valor_enfeite2);
    scanf("%d %lf", &qnt_enfeite3, &valor_enfeite3);

    total += valor_arvore;

    total += qnt_enfeite1 * valor_enfeite1;
    total += qnt_enfeite2 * valor_enfeite2;
    total += qnt_enfeite3 * valor_enfeite3;

    printf("%.2lf\n%.2lf", total, total / 21);

    return 0;
}