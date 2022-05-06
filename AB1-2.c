#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// X - X - X - X - X
// 1º  2º  3º  4º  5º

// 5º = n * 1
// 4º = n * 10
// 3º = n * 100
// 2º = n * 1000
// 1º = n * 10000

// it could be zero - zero is not considered
// 1 - 1 = 11
// 1 + 1 = 2

void interpretaSinal(int sinal)
{

    // Gêmeo Cálido
    if (sinal % 2 == 0 && sinal % 7 != 0)
        printf("Feldspato, va para Gemeo Calido\n");

    // Gêmeo Cinzento
    else if (sinal % 7 == 0 && sinal % 2 != 0)
        printf("Feldspato, va para Gemeo Cinzento\n");

    // Vale Incerto
    else if (sinal >= 50000 && sinal <= 99999)
        printf("Feldspato, va para Vale Incerto\n");

    // Profundezas do Gigante
    else if (sinal >= 100 && sinal <= 49999)
        printf("Feldspato, va para Profundezas do Gigante\n");

    // Abrolho Sombrio
    else if (sinal > 0 && sinal < 3)
        printf("Feldspato, va para Abrolho Sombrio\n");

    // erro de leitura
    else
        printf("Feldspato, foi um erro de leitura\n");
}

int main()
{
    int a, b, c, d, e;
    int sinal, sinalInvertido;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sinal = (a * 10000) + (b * 1000) + (c * 100) + (d * 10) + (e * 1);

    // checando caso especial

    sinalInvertido = (e * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);

    if (sinal == sinalInvertido)
    {
        printf("Feldspato, de um esporro no Gabro por mim\n");
        return 0;
    }

    // back to the normal

    interpretaSinal(sinal);

    return 0;
}