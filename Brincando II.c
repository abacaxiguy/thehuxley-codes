#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* HE'S HERE, AGAIN, THE RETURN, THE COMEBACK THAT EVERYONE WAS WAITING ON

   FLOCCINAUCINIHILIPILIFICATION, THE BEST F WORD IN THE WORLD, LESGOOOOOOOOOOOO

    _...____--------_____
    ....|....::::::::::::..--|
    ...|......................|
    ..|......_||-__.....___...|
    .-.___..|---|__|...||__|...|
    |.|._.-___-........|........|
    |.|.|-__.....|-....-_.._---_.|
    .|-_.|_.|-__.-.--.__-....|..|
    ..|..-_-|__.|---____--|-||.|
    ...|..||..-|___|__|_||||.|
    ....|...--_.|...|......||.|
    ....-_...--___|_|_|_|_-..|
    ......-__...............|
    ........--__............|
    .............-_____....|

    (this was supposed to be troll face, mb)

*/

#define TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION 3

double calcula_media_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(int a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION][TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION])
{
    double soma_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0;
    int contador_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0;
    for (int i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
    {
        for (int j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
        {
            if (a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification][j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification] > 0) {
                soma_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification += a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification][j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification];
                contador_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++;
            }
        }
    }
    return soma_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification / contador_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification;
}

int calcula_menor_valor_lido_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(int a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION][TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION])
{
    int menor_valor_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[0][0];
    for (int i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
    {
        for (int j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
        {
            if (a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification][j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification] < menor_valor_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification) {
                menor_valor_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification][j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification];
            }
        }
    }
    return menor_valor_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification;
}

int calcula_delta_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(int menor_valor_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification) {
    return !menor_valor_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification % 2;
}

int calcula_todos_que_nao_estao_na_diagonal_principal_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(int a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION][TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION])
{
    int soma_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0;
    for (int i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
    {
        for (int j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
        {
            if (i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification != j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification) {
                soma_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification += a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification][j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification];
            }
        }
    }
    return soma_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification;
}

int main() {
    int a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION][TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION];

    for (int i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
    {
        for (int j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = 0; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification < TAMANHO_MAXIMO_DA_A_MELHOR_PALAVRA_QUE_O_MUNDO_JA_CRIOU_FLOCCINAUCINIHILIPILIFICATION; j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification++)
        {
            scanf("%d", &a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification[i_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification][j_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification]);
        }
    }

    int todos_que_nao_estao_na_diagonal_principal_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification = calcula_todos_que_nao_estao_na_diagonal_principal_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification);

    printf("%.2f %d %d %d\n", calcula_media_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification), calcula_menor_valor_lido_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification), calcula_delta_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(calcula_menor_valor_lido_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification(a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification)), todos_que_nao_estao_na_diagonal_principal_da_a_melhor_palavra_que_o_mundo_ja_criou_floccinaucinihilipilification);

    return 0;
}