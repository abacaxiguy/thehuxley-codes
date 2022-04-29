#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;

    scanf("%d%d", &n, &m);

    if (n > m)
        printf("%d %d\n", m, n);
    else
        printf("%d %d\n", n, m);

    return 0;
}