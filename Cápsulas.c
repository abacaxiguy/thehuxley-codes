#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int treco(int n, int c){
    if(c == 'P' || c == 'p') return n*10;
    else if(c == 'G' || c == 'g') return n*16;

}

int main() {
    int n, total;
    char c;

    scanf("%d\n %c", &n, &c);

    total += treco(n, c);

    scanf("%d %c", &n, &c);

    total += treco(n, c);

    scanf("%d %c", &n, &c);

    total += treco(n, c);

    scanf("%d %c", &n, &c);

    total += treco(n, c);

    scanf("%d %c", &n, &c);

    total += treco(n, c);

    scanf("%d %c", &n, &c);

    total += treco(n, c);

    scanf("%d %c", &n, &c);

    total += treco(n, c);

    printf("%d\n%d", total, (total/7) * 2);

	return 0;
}