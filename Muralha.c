#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define INICIO -1
#define REINO_ALTO 0
#define REINO_BAIXO 1
#define MURALHA 2

int contar_moedas(int n, int x, int y, int moedas, int localizacao_antepassada)
{
    if (n == 0)
        return moedas;

    char passo;
    int localizacao_passada, localizacao_atual;

    if (y < x)
        localizacao_passada = REINO_BAIXO;
    else if (y > x)
        localizacao_passada = REINO_ALTO;
    else if (y == x)
        localizacao_passada = MURALHA;

    scanf(" %c", &passo);

    if (passo == 'C')
        y += 1;

    else if (passo = 'D')
        x += 1;

    if (y == x)
        localizacao_atual = MURALHA;
    else if (y < x)
        localizacao_atual = REINO_BAIXO;
    else if (y > x)
        localizacao_atual = REINO_ALTO;

    if (localizacao_antepassada != INICIO)
    {
        if (localizacao_antepassada != localizacao_atual)
            moedas++;
    }

    n--;

    contar_moedas(n, x, y, moedas, localizacao_passada);
}

int main()
{
    int n, moedas;

    scanf("%d", &n);

    moedas = contar_moedas(n, 0, 0, 0, INICIO);

    printf("%d\n", moedas);

    return 0;
}