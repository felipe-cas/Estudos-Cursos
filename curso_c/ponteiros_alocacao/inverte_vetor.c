#include <stdio.h>
#include <stdlib.h>

void testa_vet(void *vet) {
	if (vet == NULL) {
		printf("ERRO DE ALOCAÇÃO DE MEMÓRIA.\n");
		exit(1);
	}
}


void mostra_vet(int *vet, int tam) {
	printf("|");
	for (int i = 0; i < tam; i++) {
		printf("%3i", vet[i]);
	}
	printf(" |");

}


void inverte_vet(int *vet, int tam) {
	int aux[tam], j = 0;

	for (int i = 0; i < tam; i++) {
		aux[i] = vet[i];
	}

	for (int i = tam-1; i >= 0; i--) {
		vet[j] = aux[i];
		j++;
	}

}


void inverte_vet2(int *vet, int tam) {
	int aux;

	for (int i = 0; i < tam / 2; i++) {
		aux = vet[i];
		vet[i] = vet[tam - 1 - i];
		vet[tam - 1 - i] = aux;
	}
}


int main() {
	int tam, *vet;

	//Pegando tamanho do vetor
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tam);

	//Alocando e testando vetor
	vet = (int *) malloc(sizeof(int) * tam);
	testa_vet(&vet);

	//Populando vetor
	printf("Digite %i valores para o vetor:\n", tam);
	for (int i = 0; i < tam; i++) {
		scanf("%i", &vet[i]);
	}

	//Mostrando vetor original e invertido
	printf("\nVETOR ORIGINAL:\n");
	mostra_vet(vet, tam);

	inverte_vet2(vet, tam);

	printf("\n\nVETOR INVERTIDO:\n");
	mostra_vet(vet, tam);

	printf("\n");
	free(vet);


	return 0;
}
