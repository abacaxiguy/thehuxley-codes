#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler(int id_maior, int qnt_timina_maior){
	int id, qnt_timina = 0;
	char dna[31];

	scanf("%d", &id);

	if (id == 9999) {
		printf("%d", id_maior);
		return;
	}

	for (int i=0; i < 30; i++){
		scanf(" %c", &dna[i]);
		if (dna[i] == 'T') qnt_timina++;
	}

	if (qnt_timina_maior <= qnt_timina) ler(id, qnt_timina);
	else ler(id_maior, qnt_timina_maior);
}

int main() {

	int id, qnt_timina = 0;
	char dna[31];
	
	scanf("%d", &id);

	if (id == 9999) return 0;

	for (int i=0; i < 30; i++){
		scanf(" %c", &dna[i]);
		if (dna[i] == 'T') qnt_timina++;
	}

	ler(id, qnt_timina);

	return 0;
}