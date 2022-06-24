#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int princesas, eleitores;

    scanf("%d\n%d", &princesas, &eleitores);

    int votos[eleitores][princesas];

    for (int i = 0; i < eleitores; i++) {
        for (int j = 0; j < princesas; j++) scanf("%d", &votos[i][j]);
    }

    for (int i = 0; i < princesas; i++) {

        int soma = 0;

        for (int j = 0; j < eleitores; j++) {
            if (votos[j][i]) soma++;
        }

        printf("Princesa %d: %d voto(s)\n", i + 1, soma);
    }

    return 0;
}