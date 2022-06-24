#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int n;

	scanf("%d", &n);

	if (n == 0) {
		printf("Vazia\n");
		return;
	}
	
	int m1[n][n], m2[n][n], m3[n][n], value;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &value);
			m1[i][j] = value;
		}
	}

	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++) {
			scanf("%d", &value);
			m2[i][j] = value;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			m3[i][j] = m1[i][j] + m2[i][j];
			printf("%d\n", m3[i][j]);
		}
	}

	return 0;
}
