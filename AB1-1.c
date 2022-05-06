#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// estilo primario
#define ELETRONIC 1
#define INDIE 2
#define ROCK 3

// estilo secundario
#define HARD 1
#define AMISTOSO 2

void moodCheck(int eP, int eS)
{
    // Aumenta mais!
    if (eP == ELETRONIC && eS == HARD)
        printf("Aumenta mais!\n");
    else if (eP == ROCK && eS == HARD)
        printf("Aumenta mais!\n");

    // Legal
    else if (eP == ELETRONIC && eS == AMISTOSO)
        printf("Legal\n");
    else if (eP == ROCK && eS == AMISTOSO)
        printf("Legal\n");

    // Hoje eu choro
    else if (eP == INDIE && eS == AMISTOSO)
        printf("Hoje eu choro\n");

    // Essa eh punk
    else if (eP == INDIE && eS == HARD)
        printf("Essa eh punk\n");
}

void emoticon(double f)
{
    if (f >= 1 && f <= 4)
        printf(":'(");
    else if (f > 4 && f <= 7)
        printf("^_^");
    else if (f > 7 && f <= 10)
        printf("=D");
}

int main()
{
    int estiloP, estiloS;
    double fatorM;

    scanf("%d\n%d\n%lf", &estiloP, &estiloS, &fatorM);

    moodCheck(estiloP, estiloS);
    emoticon(fatorM);

    return 0;
}