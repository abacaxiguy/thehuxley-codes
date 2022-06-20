#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// buracos = [1, 2, 0, 5, 3, 4]
// buracos_verificados = [0, 0, 0, 0, 0, 0]
// i = 0
// tocas = 0

// buraco = 1
// i = 0
// buracos_verificados[1] == 0? SIM, buracos_verificados[0] = 1
// i = buraco = 1

// ------------------------------------------------------------

// buracos = [1, 2, 0, 5, 3, 4]
// buracos_verificados = [1, 0, 0, 0, 0, 0]
// i = 1
// tocas = 0

// buraco = 2
// i = 1
// buracos_verificados[2] == 0? SIM, buracos_verificados[1] = 1
// i = buraco = 2

// ------------------------------------------------------------

// buracos = [1, 2, 0, 5, 3, 4]
// buracos_verificados = [1, 1, 0, 0, 0, 0]
// i = 2
// tocas = 0

// buraco = 0
// i = 2
// buracos_verificados[0] == 0? NAO, buracos_verificados[2] = 1, tocas++;
// i = que_toca_ta_faltando = 3

// ------------------------------------------------------------

// buracos = [1, 2, 0, 5, 3, 4]
// buracos_verificados = [1, 1, 1, 0, 0, 0]
// i = 3
// tocas = 1

// buraco = 5
// i = 3
// buracos_verificados[5] == 0? SIM, buracos_verificados[3] = 1
// i = 5

// ------------------------------------------------------------

// buracos = [1, 2, 0, 5, 3, 4]
// buracos_verificados = [1, 1, 1, 1, 0, 0]
// i = 5
// tocas = 1

// buraco = 4
// i = 5
// buracos_verificados[4] == 0? SIM, buracos_verificados[5] = 1
// i = 4

// ------------------------------------------------------------

// buracos = [1, 2, 0, 5, 3, 4]
// buracos_verificados = [1, 1, 1, 1, 0, 1]
// i = 4
// tocas = 1

// buraco = 3
// i = 4
// buracos_verificados[3] == 0? NAO, buracos_verificados[4] = 1
// i = que_toca_ta_faltando = -1

// GG

int que_toca_ta_faltando(int buracos_verificados[], int i, int len)
{
    if (i >= len) return -1;
    if(buracos_verificados[i] == 0) return i;

    que_toca_ta_faltando(buracos_verificados, i + 1, len);
}

int verificar_buracos(int buracos_verificados[], int i, int buraco)
{
    if (buracos_verificados[buraco] == 0)
    {
        buracos_verificados[i] = 1;
        return 0;
    }
    else
    {
        buracos_verificados[i] = 1;
        return 1;
    }
}

void procurar_toca(int buracos[], int buracos_verificados[], int i, int tocas, int len){

    if(verificar_buracos(buracos_verificados, i, buracos[i])){
        tocas++;
        i = que_toca_ta_faltando(buracos_verificados, 0, len);
        
        if (i == -1) { 
            printf("%d\n", tocas);
            return;
        }
        else {
            procurar_toca(buracos, buracos_verificados, i, tocas, len);
        }
    }

    else procurar_toca(buracos, buracos_verificados, buracos[i], tocas, len);
}

void ler(int n, int i, int buracos[], int buracos_verificados[]){
    if (i >= n) return;

    scanf("%d", &buracos[i]);
    buracos_verificados[i] = 0;

    ler(n, i + 1, buracos, buracos_verificados);
}

int main() {
    int n;

    scanf("%d", &n);

    int buracos[n];
    int buracos_verificados[n];

    ler(n, 0, buracos, buracos_verificados);

    procurar_toca(buracos, buracos_verificados, 0, 0, n);

    return 0;
}
