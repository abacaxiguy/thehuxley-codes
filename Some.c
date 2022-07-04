#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fill_the_smallest_string(char smallest_string[], int max_size, char *string) {
    int cont = 0;

    for (int i = 0; i < max_size; i++) {
        string[i] = '0';
    }

    for (int i = max_size - strlen(smallest_string); i <= max_size; i++) {
        string[i] = smallest_string[cont];
        cont++;
    }

    string[max_size] = '\0';
}

int main()
{
    int soma = 0, tam_max = 0;
    char m_str[10001], n_str[10001];

    char sum[tam_max];	

    scanf("%s\n%s", m_str, n_str);

    if (strlen(m_str) > strlen(n_str)) {
        tam_max = strlen(m_str);

        char menor_str[tam_max];

        fill_the_smallest_string(n_str, tam_max, menor_str);

        char sum[tam_max];

        for (int i = tam_max - 1; i >= 0; i--)
        {
            soma += m_str[i] - '0' + menor_str[i] - '0';

            if (soma > 9)
            {
                sum[i] = soma - 10;
                soma = 1;
            }
            else
            {
                sum[i] = soma;
                soma = 0;
            }
        }
        for (int i = 0; i < tam_max; i++) printf("%d", sum[i]);

    } else if (strlen(m_str) < strlen(n_str)) {
        tam_max = strlen(n_str);

        char menor_str[tam_max];

        fill_the_smallest_string(m_str, tam_max, menor_str);

        char sum[tam_max];

        for (int i = tam_max - 1; i >= 0; i--)
        {

            soma += n_str[i] - '0' + menor_str[i] - '0';

            if (soma > 9)
            {
                sum[i] = soma - 10;
                soma = 1;
            }
            else
            {
                sum[i] = soma;
                soma = 0;
            }
        }

        for (int i = 0; i < tam_max; i++) printf("%d", sum[i]);

    } else {
        tam_max = strlen(m_str);

        char sum[tam_max];

        for (int i = tam_max - 1; i >= 0; i--)
        {

            soma += n_str[i] - '0' + m_str[i] - '0';

            if (soma > 9)
            {
                sum[i] = soma - 10;
                soma = 1;
            }
            else
            {
                sum[i] = soma;
                soma = 0;
            }
        }
        for (int i = 0; i < tam_max; i++) printf("%d", sum[i]);
    }

    
    printf("\n");

    return 0;
}
