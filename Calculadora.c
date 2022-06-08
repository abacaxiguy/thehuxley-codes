#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TAXA_IMPORTACAO 0.6

int main()
{
    double dolar, aliquota, valor_produto, frete, valor_final, total;

    scanf("%lf %lf %lf %lf", &dolar, &aliquota, &valor_produto, &frete);

    printf("%.2lf\n", dolar);
    printf("%.2lf\n", valor_produto * dolar);
    printf("%.2lf\n", frete * dolar);

    frete = frete * dolar;
    valor_final = valor_produto >= 2500 ? valor_produto * dolar : frete + valor_produto * dolar;

    printf("%.2lf\n", valor_produto >= 2500 ? valor_final + frete : valor_final);
    printf("%.2lf\n", valor_final * TAXA_IMPORTACAO);

    total = (valor_final + (valor_final * TAXA_IMPORTACAO)) / (1 - aliquota / 100);

    printf("%.2lf\n", total * (aliquota / 100));
    printf("%.2lf\n", (valor_final * TAXA_IMPORTACAO) + (total * (aliquota / 100)));
    printf("%.2lf\n", total);

    valor_produto >= 2500 ? printf("Impostos calculados sem o frete") : printf("Impostos calculados com o frete");

    return 0;
}