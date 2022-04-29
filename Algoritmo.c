#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int euclides(int a, int b){

    if (b == 0){
        return a;
    }

    return euclides(b, a%b);

}


void ler(int vezes){
    if (vezes >= 1){
        int a, b, mdc;
        
        scanf("%d %d", &a, &b);

        mdc = euclides(a, b);

        printf("MDC(%d,%d) = %d\n", a, b, mdc);

        ler(vezes-1);
    }
}

int main() {
    int vezes;
    
    scanf("%d", &vezes);
    
    ler(vezes);
    
	return 0;
}