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
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                scanf("%d", &sudoku[j][k]);
            }
        }

        int linha[9], coluna[9], regiao[9], contador = 0;
        int flag = 1;

        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                linha[contador] = sudoku[j][k];
                coluna[contador] = sudoku[k][j];
                printf("%d ", coluna[contador]);
                regiao[contador] = sudoku[(j/3)*3 + k/3][(k%3)*3 + j%3];

                contador++;
            }

            printf("\n");
        }


        ordena(linha);
        ordena(coluna);
        ordena(regiao);

        // for (int z = 0; z < 9; z++) {
        //     printf("%d", linha[z]);
        //     if (z != 8) {
        //         printf(" ");
        //     } else printf("\n");
        // }

        for (int z = 0; z < 9; z++) {
            printf("%d", coluna[z]);
            if (z != 8) {
                printf(" ");
            } else printf("\n");
        }

        // for (int z = 0; z < 9; z++) {
        //     printf("%d", regiao[z]);
        //     if (z != 8) {
        //         printf(" ");
        //     } else printf("\n");
        // }

        for (int j = 0; j < 9; j++) {
            if (linha[j] != j+1 || coluna[j] != j+1 || regiao[j] != j+1) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("Instancia %d\nSIM\n", i);
        } else {
            printf("Instancia %d\nNAO\n", i);
        }
    }
}