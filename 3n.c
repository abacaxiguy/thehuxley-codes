#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ciclo_3n1(int n, int cont)
{
    if (n == 1)
    {
        cont++;
        return cont;
    }

    else if (n % 2 == 0)
        ciclo_3n1(n / 2, cont + 1);
    else if (n % 2 != 0)
        ciclo_3n1((n * 3) + 1, cont + 1);
}

int range_3n1(int i, int j, int max)
{
    if (j == i)
        return max;
    int n;

    if (j > i)
    {
        n = ciclo_3n1(j, 0);

        if (n > max)
            max = n;

        range_3n1(i, j - 1, max);
    }
    else
    {
        n = ciclo_3n1(i, 0);

        if (n > max)
            max = n;

        range_3n1(i - 1, j, max);
    }
}

void ler()
{
    int i, j;

    scanf("%d", &i);
    if (i <= 0)
        return;

    scanf("%d", &j);
    if (j <= 0)
        return;

    printf("%d %d %d\n", i, j, range_3n1(i, j, 0));

    ler();
}

int main()
{
    ler();

    return 0;
}