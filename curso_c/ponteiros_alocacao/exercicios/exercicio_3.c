#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tam;
char *vet;


void inverteFrase(char *vet, int tam) {
	char aux;
	for (int i = 0; i < tam/2; i++) {
		aux = vet[i];
		vet[i] = vet[tam - 1 - i];
		vet[tam - 1 - i] = aux;

	}

}


int main() {
	{	//SOLICITANDO FRASE
		char frase[1024];

		printf("Digite alguma frase: ");
		fgets(frase, sizeof(frase), stdin);

		tam = strlen(frase);

		//ALOCANDO E TESTANDO MEMÓRIA
		vet = (char *) malloc(sizeof(char) * tam);
		if (vet == NULL) {
			printf("ERRO DE ALOCAÇÃO DE MEMÓRIA\n");
			return 1;
		}

		vet = frase;
	}

	//MOSRANDO RESULTADO
	inverteFrase(vet, tam);
	printf("\nFrase Invertida: %s\n", vet);

	free(vet);

	return 0;
}
