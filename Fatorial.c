#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int fatorial(long int n){
     if (n == 0){
        return 1;
    }

    return n * fatorial(n-1);

}

void ler(){
    int n;

    scanf("%d", &n);
    
    if (n == -1) return;

    else {
        int f;

        f = fatorial(n);

        printf("%d\n", f);

        ler();
    }

}

int main() {

    ler();

    return 0;
}
