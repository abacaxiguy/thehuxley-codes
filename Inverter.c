#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void inverte_string(int i, int x, int len, char string[])
{
    x--;

    if (i == x)
        return;
    else if (i > x && len % 2 == 0)
        return;

    char aux;

    aux = string[x];
    string[x] = string[i];
    string[i] = aux;

    inverte_string(i + 1, x, len, string);
}

int minha_strlen(int i, int n, char string[])
{
    if (string[i] == '\0')
    {
        if (string[i + 1] == '\0')
            return n;
    }
    else
        n++;

    minha_strlen(i + 1, n, string);
}

int main()
{
    char string[255];
    int len;

    fgets(string, 255, stdin);

    inverte_string(0, strlen(string), strlen(string), string);
    // len = minha_strlen(0, 0, string);
    // inverte_string(0, len, len, string);

    printf("%s", string);

    return 0;
}