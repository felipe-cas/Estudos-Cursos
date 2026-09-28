#include <stdio.h>

void mostraVet(int *vet, int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d", vet[i]);
	}
}

void selectionSort(int *vet, int n) {
	for (int i = 0; i < n; i++) {
		int ind = i;

		for (int j = i + 1; j < n; j++) {
			if (vet[j] < vet[ind]) ind = j;
		}
		int temp = vet[i];
		vet[i] = vet[ind];
		vet[ind] = temp;
	}
}


int main() {
	int numeros[] = {9,7,5,3,1,4,2,6,8,0};
	int *ptr = numeros;

	int tam = sizeof(numeros) / sizeof(*ptr);

	printf("ANTES: ");
	mostraVet(ptr, tam);

	selectionSort(ptr, tam);

	printf("\nDEPOIS:");
	mostraVet(ptr, tam);

	printf("\n");

	return 0;
}
