#include <stdio.h>
#include <math.h>

void ler(double x, int i, double soma, double n, double d)
{
    if (i > 1)
    {
        if (i % 2 == 0)
        {
            soma += pow(2, i - 1) / d;

            d += 3;
        }
        if (i % 2 != 0)
        {
            soma += n / pow(2, i - 1);
            n += 2;
        }
    }

    if (i == 1)
    {
        soma++;
    }
    if (i >= x)
    {
        printf("S: %.2lf\n", soma);
        return;
    }
    return ler(x, i + 1, soma, n, d);
}

int main()
{
    double x;
    scanf("%lf", &x);

    ler(x, 1, 0, 3, 3);
}
