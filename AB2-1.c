#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// irei patentear esse sorting algorithm, ele se chama "Abacaxi sorting", e é um dos melhores sorting algorithms feitos na história

// ele pega o maior numero, e bota no inicio, e dps ignora o primeiro numero, já q ele é o maior, e assim vai


double maior_do_array(double array[], int i, double max, int len, int *indice)
{
	if (i >= len)
		return max;

	if (array[i] >= max)
	{
		max = array[i];
		*indice = i;
	}

	return maior_do_array(array, i + 1, max, len, indice);
}

void printarNotas(double array[], int len, int i){
	if (i >= len)
		return;

	double temp;
	int indice;

	temp = array[i];
	array[i] = maior_do_array(array, i, 0, len, &indice);
	array[indice] = temp;
	i+1 >= len ? printf("%.2lf", array[i]) : printf("%.2lf ", array[i]);

	printarNotas(array, len, i + 1);
}

void ler(double notasCC[], double notasEC[], int tamanhoCC, int tamanhoEC, int i){
	if (i >= 10) {
		printf("EC: ");
		printarNotas(notasEC, tamanhoEC, 0);
		printf("\n");
		printf("CC: ");
		printarNotas(notasCC, tamanhoCC, 0);
		printf("\n");
		return;
	};

	double notaTemp;
	char curso;

	scanf("%lf", &notaTemp);

	scanf(" %c", &curso);

	if (curso == 'c'){
		notasCC[tamanhoCC] = notaTemp;
		tamanhoCC++;
	} else {
		notasEC[tamanhoEC] = notaTemp;
		tamanhoEC++;
	}

	ler(notasCC, notasEC, tamanhoCC, tamanhoEC, i + 1);
}

int main() {
	double notasCC[10];
	double notasEC[10];

	ler(notasCC, notasEC, 0, 0, 0);


	return 0;
}