#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// conceito A > 12.5%
// conceito B < 11% AND > 8.3%
// conceito C < 7.6% && > 5.5%
// pior conceito < 5%

int main()
{
	double alunos, livros, porcentagem;

	scanf("%lf %lf", &alunos, &livros);

	porcentagem = (alunos / livros) * 100;

	if (porcentagem >= 12.5)
		printf("A\n");
	else if (porcentagem <= 12.4 && porcentagem >= 8.3)
		printf("B\n");
	else if (porcentagem <= 8.2 && porcentagem >= 5.5)
		printf("C\n");
	else if (porcentagem <= 5.4)
		printf("D\n");

	return 0;
}