#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 3 = 1 / 2 = 2 / 1 = 3

int podeJogar(char elo1, char elo2, int nElo1, int nElo2)
{
}

int main()
{
    char elo1, elo2;
    int nElo1, nElo2;
    int quocientePodeJogar;

    scanf("%c %c", &elo1, &elo2);
    scanf("%d %d", &nElo1, &nElo2);

    quocientePodeJogar = podeJogar(elo1, elo2, nElo1, nElo2);

    // if(quocientePodeJogar > 3) printf("NO\n");
    // else printf("YES\n");

    return 0;
}