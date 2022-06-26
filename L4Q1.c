#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diagonal_primaria(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

int diagonal_secundaria(int matriz[3][3]) {
    // + | 0 1 2
    // ----------
    // 0 | 0 1 2
    // 1 | 1 2 3
    // 2 | 2 3 4

    // if i + j == 2, então é uma diagonal secundária

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (((i + j) == 2 && matriz[i][j] != 1) || ((i + j) != 2 && matriz[i][j] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int luke_vida, vader_vida;

    scanf("%d %d", &luke_vida, &vader_vida);
    
    for (int i = 1; i <= 10; i++) {

        int golpe_luke[3][3], golpe_vader[3][3];

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &golpe_luke[j][k]);
            }
        }

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &golpe_vader[j][k]);
            }
        }

        if (!((diagonal_primaria(golpe_luke) && diagonal_secundaria(golpe_vader))) || !(diagonal_primaria(golpe_vader) && diagonal_secundaria(golpe_luke))){
            if (diagonal_primaria(golpe_luke) || diagonal_secundaria(golpe_luke))
                vader_vida -= 15;

            if (diagonal_primaria(golpe_vader) || diagonal_secundaria(golpe_vader))
                luke_vida -= 15;
        }
        
        if (luke_vida <= 0 || vader_vida <= 0) {

            if (luke_vida <= 0 && vader_vida <= 0) printf("Houve empate.\n");

            else if (luke_vida <= 0) printf("Darth Vader venceu.\n");

            else printf("Luke Skywalker venceu.\n");

            return 0;
        }
    }

    printf("Houve empate.\n");
   
    return 0;
}