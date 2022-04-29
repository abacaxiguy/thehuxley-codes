#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// how the hell i'm gonna prove this

// with one number
// f(x) = 0 if x = 0

// with two numbers
// f(x) = x ± y, is 0 if x = y => x - y = 0

// with three numbers
// f(x) = x ± y ± z, is 0 if x + y = z => x + y - z = 0
// or ?

int travel(int a, int b, int c)
{
    // using 1 number
    if (a == 0 || b == 0 || c == 0)
        return 1;

    // using 2 numbers
    else if (a == b || b == c || a == c)
        return 1;

    // using 3 numbers
    else if (a + b == c || b + c == a || c + a == b)
        return 1;

    else
        return 0;
}

int main()
{
    int a, b, c, resposta;

    scanf("%d%d%d", &a, &b, &c);

    resposta = travel(a, b, c);

    if (resposta)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}