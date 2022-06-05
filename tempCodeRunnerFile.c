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
    int n;

    n = ciclo_3n1(j, 0);

    if (n > max)
        max = n;

    if (j == i)
        return max;

    range_3n1(i, j - 1, max);

}

void ler()
{
    int i, j;

    if (scanf("%d", &i) == EOF) return;
    if (scanf("%d", &j) == EOF) return;

    if (j == i) printf("%d %d %d\n", i, j, ciclo_3n1(j, 0));
    else if(j > i) printf("%d %d %d\n", i, j, range_3n1(i, j, 0));
    else if (i > j) printf("%d %d %d\n", i, j, range_3n1(j, i, 0));
    
    ler();
}

int main()
{
    ler();

    return 0;
}