#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define JOAO 1
#define MARIA 2

int tem_no_array(int array[], int array_len, int num, int i){
    if (array_len == 0) return 0;
    else if (i >= array_len) return 0;
    else if (array[i] == num) return 1;
    tem_no_array(array, array_len, num, i + 1);
}

int soma_sem_repetida(int figurinhas_irmao[], int array_len, int figurinhas[], int i, int x, int irmao, int soma){
    if (i >= array_len) return soma;

    if (irmao == JOAO){
        if(figurinhas[i] % 2 == 0){
            if (tem_no_array(figurinhas_irmao, x, figurinhas[i], 0) == 0) {
                figurinhas_irmao[x] = figurinhas[i];
                soma += figurinhas[i];
                x++;
            }
        }
    } else {
        if(figurinhas[i] % 2 != 0){
            if (tem_no_array(figurinhas_irmao, x, figurinhas[i], 0) == 0)
            {
                figurinhas_irmao[x] = figurinhas[i];
                soma += figurinhas[i];
                x++;
            }
        }
    }

    soma_sem_repetida(figurinhas_irmao, array_len, figurinhas, i + 1, x, irmao, soma);
}

void ler(int n, int i, int figurinhas[], int joao, int maria){
    if (i >= n) {
        printf("%d\n%d\n", joao, maria);
        int soma_j, soma_m;
        int figurinhas_joao[joao], figurinhas_maria[maria];
        soma_j = soma_sem_repetida(figurinhas_joao, n, figurinhas, 0, 0, JOAO, 0);
        soma_m = soma_sem_repetida(figurinhas_maria, n, figurinhas, 0, 0, MARIA, 0);

        soma_j > soma_m ? printf("%d\n", soma_j) : printf("%d\n", soma_m);
        return;
    }

    int x;
    scanf("%d", &x);

    if(x % 2 == 0) joao++;
    else maria++;

    figurinhas[i] = x;

    ler(n, i + 1, figurinhas, joao, maria);
}

int main() {
    int n;

    scanf("%d", &n);

    int figurinhas[n];

    ler(n, 0, figurinhas, 0, 0);

    return 0;
}