#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordena(int vetor[]){
    for(int i = 0; i < 9; i++){
        int min = i;
        for(int j = i+1; j < 9; j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }
        }
        int aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int sudoku[9][9];
        int valida = 1;
        int regiao_c = 0, regiao_l = 0;

        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                scanf("%d", &sudoku[j][k]);
            }
        }

        for (int j = 0; j < 9; j++) {
            int linha[9], coluna[9], regiao[9], contador = 0;

            if (j % 3 == 0 && j != 0) regiao_l = 0;

            if (j >= 6) regiao_c = 6;
            else if (j >= 3) regiao_c = 3;
            else regiao_c = 0;
            
            for (int k = 0; k < 9; k++) {
                linha[contador] = sudoku[j][k];
                coluna[contador] = sudoku[k][j];
                contador++;

                if (k % 3 == 0 && k != 0) {
                    regiao_c++;
                    regiao_l -= 3;
                }
                regiao[k] = sudoku[regiao_c][regiao_l];
                regiao_l++;

            }

            ordena(linha);
            ordena(coluna);
            ordena(regiao);

            for (int j = 0; j < 9; j++) {
                if (linha[j] != j+1 || coluna[j] != j+1 || regiao[j] != j+1) {
                    valida = 0;
                    break;
                }
            }
        }

        if (valida) {
            printf("Instancia %d\nSIM\n", i);
        } else {
            printf("Instancia %d\nNAO\n", i);
        }

        if (i != n) printf("\n");
    }
}