#include <stdio.h>
#include <stdlib.h>

float calcMediaVet(float *vet,int tam) {
	float media;

	for (int i = 0; i < tam; i++) {
		media += vet[i];
	}

	return media/tam;
}


int main() {
	float *vet, media;
	int tam;

	//SOLICITANDO TAMANHO DO VETOR
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tam);

	//ALOCANDO E TESTANDO VETOR
	vet = (float *) malloc(sizeof(float) * tam);
	if (vet == NULL) {
		printf("ERRO DE ALOCAÇÃO DE MEMÓRIA.\n");
		return 1;
	}

	//POPULANDO VETOR
	printf("\nDigite os valores para o vetor:\n");
	for (int i = 0; i < tam; i++) {
		scanf("%f", &vet[i]);
	}

	//MOSTRANDO VETOR
	printf("\nVetor Registrado:\n");
	for (int i = 0; i < tam; i++) {
		printf("%6.2f", vet[i]);
	}

	//CALCULANDO MÉDIA DO VETOR
	media = calcMediaVet(vet, tam);
	printf("\nA média do vetor é %.2f\n", media);

	free(vet);

	return 0;
}
