#include <stdio.h>

void mostraVet(int *vet, int n) {
	for (int i = 0; i < n; i++) {
		printf("%3d", vet[i]);
	}
	printf("\n");
}


int particionar(int *vet, int inicio, int fim) {
	int pivo = vet[ (inicio+fim)/2 ];
//	int pivo = (vet[inicio] + vet[fim] + (vet[inicio] + vet[fim]) / 2) / 3;

	while (inicio < fim) {

		while (vet[inicio] < pivo) inicio++;

		while (vet[fim] > pivo) fim--;

//		printf("\n\nPIVO: %d | INICIO: %d | FIM: %d\n", pivo, inicio, fim);
//		mostraVet(vet, 10);

		int aux = vet[inicio];
		vet[inicio] = vet[fim];
		vet[fim] = aux;

	}

	return inicio;
}


void quickSort(int *vet, int inicio, int fim) {
	if (inicio < fim) {
		int pos = particionar(vet, inicio, fim);
		quickSort(vet, inicio, pos);
		quickSort(vet, pos+1, fim);
	}
}


int main() {
	int numeros[] = {9,7,5,3,1,8,6,4,2,0};
	int *ptr = numeros;
	int tam = sizeof(numeros)/sizeof(*ptr);

	printf("VETOR ORIGINAL: ");
	mostraVet(ptr, tam);

	quickSort(ptr, 0, tam-1);

	printf("VETOR ORDENADO: ");
	mostraVet(ptr, tam);

	return 0;
}
