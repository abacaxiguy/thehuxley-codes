#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verificaMultiplo(int x, int y, int i)
{
    if (x * i > y)
        return 0;

    else if (x * i == y)
        return 1;

    return verificaMultiplo(x, y, i + 1);
}

void calculaMultiplos(int x, int y, int multiplos, int i)
{
    if ((x * i) >= 50 || (y * i) >= 50)
    {
        printf("%d\n", multiplos);
        return;
    }

    else if (verificaMultiplo(x, y * i, 1))
        multiplos++;

    calculaMultiplos(x, y, multiplos, i + 1);
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    calculaMultiplos(x, y, 0, 1);

    return 0;
}