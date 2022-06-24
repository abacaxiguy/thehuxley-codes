#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    float total_preco = 0, total_frutas = 0;

    scanf("%d", &n);

    for (int dia = 1; dia <= n; dia++)
    {
        float preco = 0;
        int frutas = 0;
        char str[500];

        scanf("%f\n%[^\n]s", &preco, str);

        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ') frutas++;
        }

        frutas++;

        total_preco += preco;
        total_frutas += frutas;

        printf("dia %d: %d kg\n", dia, frutas);
    }

    printf("%.2f kg por dia\n", total_frutas / n);
    printf("R$ %.2f por dia\n", total_preco / n);

    return 0;
}