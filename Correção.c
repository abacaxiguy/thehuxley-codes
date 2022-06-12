#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int quantas_vezes_nota(int frequencia[], int i, int max, int n){
    if (i > 10) {
        return n;
    }

    if(frequencia[i] > max){
        max = frequencia[i];
        n = i;
    }

    quantas_vezes_nota(frequencia, i + 1, max, n);
}

double verificar_gabarito(char gabarito[], char resposta[], int i, double acertos){
    if(i >= 10) return acertos;

    if (gabarito[i] == resposta[i])
        acertos++;

    verificar_gabarito(gabarito, resposta, i + 1, acertos);
}

void ler(char gabarito[], int i, int aprovados, int frequencia[])
{
    int id;
    double nota;
    char resposta[11];

    scanf("%d", &id);

    if (id == 9999){
        printf("%.1lf%%\n", ((double)aprovados / (double)i) * 100);
        printf("%.1lf\n", (double)quantas_vezes_nota(frequencia, 0, 0, 0));
        return;
    }

    scanf("%s", resposta);

    nota = verificar_gabarito(gabarito, resposta, 0, 0);

    if (nota >= 6) aprovados++;

    frequencia[(int)nota]++;

    printf("%d %.1lf\n", id, nota);

    ler(gabarito, i+1, aprovados, frequencia);
}

int main() {
	char gabarito[11];
    int frequencia[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%s", gabarito);

    ler(gabarito, 0, 0, frequencia);

    return 0;
}