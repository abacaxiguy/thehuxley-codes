#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* IN THE TRIBUTE OF "floccinaucinihilipilification" THE BEST F WORD IN THE WORLD

    ░░░░▄▄▄▄▀▀▀▀▀▀▀▀▄▄▄▄▄▄
    ░░░░█░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░▀▀▄
    ░░░█░░░▒▒▒▒▒▒░░░░░░░░▒▒▒░░█
    ░░█░░░░░░▄██▀▄▄░░░░░▄▄▄░░░█
    ░▀▒▄▄▄▒░█▀▀▀▀▄▄█░░░██▄▄█░░░█
    █▒█▒▄░▀▄▄▄▀░░░░░░░░█░░░▒▒▒▒▒█
    █▒█░█▀▄▄░░░░░█▀░░░░▀▄░░▄▀▀▀▄▒█
    ░█▀▄░█▄░█▀▄▄░▀░▀▀░▄▄▀░░░░█░░█
    ░░█░░▀▄▀█▄▄░█▀▀▀▄▄▄▄▀▀█▀██░█
    ░░░█░░██░░▀█▄▄▄█▄▄█▄████░█
    ░░░░█░░░▀▀▄░█░░░█░███████░█
    ░░░░░▀▄░░░▀▀▄▄▄█▄█▄█▄█▄▀░░█
    ░░░░░░░▀▄▄░▒▒▒▒░░░░░░░░░░█
    ░░░░░░░░░░▀▀▄▄░▒▒▒▒▒▒▒▒▒▒░█
    ░░░░░░░░░░░░░░▀▄▄▄▄▄░░░░░█

    **um sabio uma vez disse: "n eh no meu pc q essa bomba vai rodar..."
    essa eh sua aplicacao na vida real...
*/

#define TAMANHO_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION 3
#define TAMANHO_TOTAL_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION 9;


void inserir_no_floccinaucinihilipilification(int floccinaucinihilipilification[][TAMANHO_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION]){
    for (int i_do_inserir_floccinaucinihilipilification = 0; i_do_inserir_floccinaucinihilipilification < 3; i_do_inserir_floccinaucinihilipilification++)
    {
        for (int j_do_inserir_floccinaucinihilipilification = 0; j_do_inserir_floccinaucinihilipilification < 3; j_do_inserir_floccinaucinihilipilification++)
        {
            scanf("%d", &floccinaucinihilipilification[i_do_inserir_floccinaucinihilipilification][j_do_inserir_floccinaucinihilipilification]);
        }
    }
}

double calcular_a_media_do_floccinaucinihilipilification(int floccinaucinihilipilification[][TAMANHO_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION]){
    double double_variavel_temporaria_para_a_media_do_floccinaucinihilipilification;

    for (int i_do_calcular_media_floccinaucinihilipilification = 0; i_do_calcular_media_floccinaucinihilipilification < 3; i_do_calcular_media_floccinaucinihilipilification++)
    {
        for (int j_do_calcular_media_floccinaucinihilipilification = 0; j_do_calcular_media_floccinaucinihilipilification < 3; j_do_calcular_media_floccinaucinihilipilification++)
        {
            double_variavel_temporaria_para_a_media_do_floccinaucinihilipilification = double_variavel_temporaria_para_a_media_do_floccinaucinihilipilification + floccinaucinihilipilification[i_do_calcular_media_floccinaucinihilipilification][j_do_calcular_media_floccinaucinihilipilification];
        }
    }

    double_variavel_temporaria_para_a_media_do_floccinaucinihilipilification = double_variavel_temporaria_para_a_media_do_floccinaucinihilipilification / TAMANHO_TOTAL_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION;

    return double_variavel_temporaria_para_a_media_do_floccinaucinihilipilification;
}

int calcular_maior_numero_do_floccinaucinihilipilification(int floccinaucinihilipilification[][TAMANHO_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION], int maior_numero_no_floccinaucinihilipilification){
    for (int i_do_calcular_maior_numero_floccinaucinihilipilification = 0; i_do_calcular_maior_numero_floccinaucinihilipilification < 3; i_do_calcular_maior_numero_floccinaucinihilipilification++)
    {
        for (int j_do_calcular_maior_numero_floccinaucinihilipilification = 0; j_do_calcular_maior_numero_floccinaucinihilipilification < 3; j_do_calcular_maior_numero_floccinaucinihilipilification++)
        {
            if (i_do_calcular_maior_numero_floccinaucinihilipilification == 0 && j_do_calcular_maior_numero_floccinaucinihilipilification == 0) maior_numero_no_floccinaucinihilipilification = floccinaucinihilipilification[i_do_calcular_maior_numero_floccinaucinihilipilification][j_do_calcular_maior_numero_floccinaucinihilipilification];
            else if (floccinaucinihilipilification[i_do_calcular_maior_numero_floccinaucinihilipilification][j_do_calcular_maior_numero_floccinaucinihilipilification] > maior_numero_no_floccinaucinihilipilification) maior_numero_no_floccinaucinihilipilification = floccinaucinihilipilification[i_do_calcular_maior_numero_floccinaucinihilipilification][j_do_calcular_maior_numero_floccinaucinihilipilification];
        }
    }

    return maior_numero_no_floccinaucinihilipilification;
}

int calcular_valor_delta_do_floccinaucinihilipilification(int maior_numero_no_floccinaucinihilipilification){
    return (maior_numero_no_floccinaucinihilipilification > 0) ? 1 : ((maior_numero_no_floccinaucinihilipilification < 0) ? -1 : 0);
}

int calcular_soma_dos_elementos_da_diagonal_principal_do_floccinaucinihilipilification(int floccinaucinihilipilification[][TAMANHO_MAXIMO_DO_FLOCCINAUCINIHILIPILIFICATION], int soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification){
    for (int i_do_calcularsoma_dos_elementos_da_diagonal_principal_floccinaucinihilipilification = 0; i_do_calcularsoma_dos_elementos_da_diagonal_principal_floccinaucinihilipilification < 3; i_do_calcularsoma_dos_elementos_da_diagonal_principal_floccinaucinihilipilification++)
    {
        soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification = soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification + floccinaucinihilipilification[i_do_calcularsoma_dos_elementos_da_diagonal_principal_floccinaucinihilipilification][i_do_calcularsoma_dos_elementos_da_diagonal_principal_floccinaucinihilipilification];
    }

    return soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification;
}

int main(){
    int floccinaucinihilipilification[3][3];
    double double_media_no_floccinaucinihilipilification;
    int maior_numero_no_floccinaucinihilipilification;
    int valor_delta_no_floccinaucinihilipilification;
    int soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification;

    inserir_no_floccinaucinihilipilification(floccinaucinihilipilification);

    double_media_no_floccinaucinihilipilification = calcular_a_media_do_floccinaucinihilipilification(floccinaucinihilipilification);

    maior_numero_no_floccinaucinihilipilification = calcular_maior_numero_do_floccinaucinihilipilification(floccinaucinihilipilification, maior_numero_no_floccinaucinihilipilification);

    valor_delta_no_floccinaucinihilipilification = calcular_valor_delta_do_floccinaucinihilipilification(maior_numero_no_floccinaucinihilipilification);

    soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification = calcular_soma_dos_elementos_da_diagonal_principal_do_floccinaucinihilipilification(floccinaucinihilipilification, soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification);

    printf("%.2lf %d %d %d\n", double_media_no_floccinaucinihilipilification, maior_numero_no_floccinaucinihilipilification, valor_delta_no_floccinaucinihilipilification, soma_dos_elementos_da_diagonal_principal_no_floccinaucinihilipilification);

    return 0;
}