#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


double calcula_desvalorizacao(double preco, int dificuldade, int anos){
	if (anos <= 0) return preco;
	else if (preco <= 45) return preco;

	double desvalorizacao;

	if(dificuldade == 0) desvalorizacao = 0.25;
	else if(dificuldade == 1) desvalorizacao = 0.20;
	else if(dificuldade == 2) desvalorizacao = 0.18;
	else if(dificuldade == 3) desvalorizacao = 0.15;
	else if(dificuldade == 4) desvalorizacao = 0.12;
	else if(dificuldade == 5) desvalorizacao = 0.10;


	if (preco <= 100){
		desvalorizacao /= 2;
		if (preco - preco * desvalorizacao <= 45) return 45.0;
	}

	preco -= preco * desvalorizacao;

	calcula_desvalorizacao(preco, dificuldade, anos-1);
}

void ler(int vezes, int i){
	if (vezes <= 0) return;
 
	double preco;
	int dificuldade;

	scanf("%d %lf", &dificuldade, &preco);

	printf("Jogo[%d] = R$%.2lf\n", i, calcula_desvalorizacao(preco, dificuldade, 3));

	ler(vezes-1, i+1);
}

int main() {
	int qnt_jogos;

	scanf("%d", &qnt_jogos);

	ler(qnt_jogos, 0);

	return 0;
}