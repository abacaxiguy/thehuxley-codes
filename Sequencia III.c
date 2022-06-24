#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y, z, cont = 1;
    
    scanf("%d %d %d", &x, &y, &z);
    
    for (int i = 1; i <= y; i+=z) {
        if (cont % x == 0) printf("%d\n", i);
        else printf("%d ", i);
        cont++;
    }

    return 0;
}
