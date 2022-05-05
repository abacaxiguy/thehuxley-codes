#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int programas, linhas, diaDaSemana = 0, maiorDia = 0, maiorLinhas = 0, metaP = 0, metaL = 0;

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    diaDaSemana++; // 1 - segunda

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    diaDaSemana++; // 2 - ter?a

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    diaDaSemana++; // 3 - quarta

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    diaDaSemana++; // 4 - quinta

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    diaDaSemana++; // 5 - sexta

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    diaDaSemana++; // 6 - sabado

    scanf("%d\n%d", &programas, &linhas);

    if (programas >= 5)
        metaP++;
    if (linhas >= 100)
        metaL++;
    if (maiorLinhas < linhas)
    {
        maiorLinhas = linhas;
        maiorDia = diaDaSemana;
    }

    if (maiorDia == 0)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: DOMINGO\n", metaP, metaL);
    else if (maiorDia == 1)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SEGUNDA\n", metaP, metaL);
    else if (maiorDia == 2)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: TERCA\n", metaP, metaL);
    else if (maiorDia == 3)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: QUARTA\n", metaP, metaL);
    else if (maiorDia == 4)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: QUINTA\n", metaP, metaL);
    else if (maiorDia == 5)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SEXTA\n", metaP, metaL);
    else if (maiorDia == 6)
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\nQUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\nDIA QUE MAIS PRODUZIU: SABADO\n", metaP, metaL);

    return 0;
}