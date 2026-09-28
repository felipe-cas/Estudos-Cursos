#include <stdio.h>

void mostraVet(int *vet, int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d", vet[i]);
	}
}


void insertionSort(int *vet, int n) {
	for (int i = 1; i < n; i++) {
		int chave = vet[i], aux = i -1;

		while (aux >= 0 && vet[aux] > chave) {
			vet[aux + 1] = vet[aux];
			aux--;
		}
		vet[aux+1] = chave;
	}
}

int main() {

	int numeros[] = {2,4,6,8,0,1,3,5,7,9};
	int *ptr = numeros;
	int tam = sizeof(numeros) / sizeof(*ptr);

	printf("ANTES: ");
	mostraVet(ptr, tam);

	insertionSort(ptr, tam);

	printf("\nDEPOIS:");
	mostraVet(ptr, tam);

	printf("\n");

	return 0;
}
