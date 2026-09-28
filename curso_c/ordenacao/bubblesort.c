#include <stdio.h>

void mostraVet(int *vet, int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d", vet[i]);
	}
}


void bubblesort(int *vet, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (vet[j] > vet[j+1]) {
				int aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}


int main() {
	int numeros[] = {4, 6, 2, 8, 3, 1, 9, 0, 7, 5};
	int *ptr = numeros;

	int tam = sizeof(numeros) / sizeof(*ptr);

	printf("ANTES: ");
	mostraVet(ptr, tam);

	bubblesort(ptr, tam);

	printf("\nDEPOIS:");
	mostraVet(ptr, tam);

	printf("\n");


	return 0;
}
