#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int operacao, i = 0;
    double operacoes[100][2];

    scanf("%d", &operacao);

    while(operacao != -1 && i < 100){
        operacoes[i][0] = operacao;

        double valor;
        scanf("%lf", &valor);

        operacoes[i][1] = valor;

        i++;

        scanf("%d", &operacao);
    }

    double saldo = 0, creditos = 0, debitos = 0;

    for (int j = 0; j < i; j++) {
        if (operacoes[j][0]) {
            creditos += operacoes[j][1];
            saldo += operacoes[j][1];
        } else {
            debitos += operacoes[j][1];
            saldo -= operacoes[j][1];
        }
    }

    printf("Creditos: R$ %.2f\n", creditos);
    printf("Debitos: R$ %.2f\n", debitos);
    printf("Saldo: R$ %.2f\n", saldo);
}