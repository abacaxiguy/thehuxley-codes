#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
		double precos[10];
		int precos_certos = 0;

		scanf("%lf %lf %lf %lf %lf", &precos[0], &precos[1], &precos[2], &precos[3], &precos[4]);
		scanf("%lf %lf %lf %lf %lf", &precos[5], &precos[6], &precos[7], &precos[8], &precos[9]);

		if (floor(precos[0] - (precos[0] * 0.2)) == floor(precos[1])) precos_certos++;
		if (floor(precos[2] - (precos[2] * 0.2)) == floor(precos[3])) precos_certos++;
		if (floor(precos[4] - (precos[4] * 0.2)) == floor(precos[5])) precos_certos++;
		if (floor(precos[6] - (precos[6] * 0.2)) == floor(precos[7])) precos_certos++;
		if (floor(precos[8] - (precos[8] * 0.2)) == floor(precos[9])) precos_certos++;


  	printf("%d", precos_certos);

    return 0;
}