#include <stdio.h>
#include <stdlib.h>

void teste_memo(void *vet) {
	if (vet == NULL) {
		printf("ERRO DE ALOCAÇÃO DE MEMÓRIA.\n");
		exit(1);
	}
}


int main() {
	int tam, *vet;

	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tam);

	vet = malloc(sizeof(int) * tam);
	teste_memo(&vet);

	printf("Digite %i numeros:\n", tam);

	for (int i = 0; i < tam; ++i) {
		scanf("%i", &vet[i]);
	}

	printf("\nVetor Alocado:\n\n");

	for (int i = 0; i < tam; ++i) {
		printf(" %3i", vet[i]);
	}

	free(vet);

	printf("\n");

	return 0;
}
