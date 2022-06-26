#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int soma = 0, tam_max = 0;
    int m_str[500], n_str[500];

    scanf("%s\n%s", m_str, n_str);

    tam_max = strlen(m_str) > strlen(n_str) ? strlen(m_str) : strlen(n_str);
    
    int sum[tam_max];

    for (int i = tam_max - 1; i >= 0; i--) {

        soma += m_str[i] - '0' + n_str[i] - '0';

        if (soma > 9) {
            sum[i] = soma - 10;
            soma = 1;
        } else {
            sum[i] = soma;
            soma = 0;
        }
    }

    for (int i = 0; i < tam_max; i++) printf("%d", sum[i]);

    printf("\n");

    return 0;
}
