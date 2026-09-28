#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetorAleatorio(int vetor[], int tamanho) {
	int unsigned seed = time(NULL);

	for (int i = 0; i < tamanho; ++i) {
		vetor[i] = rand_r(&seed) % 100;

	}

}


void vetorPar(int vetor_1[], int t_1) {
	int pares[t_1], count = 0;

	for (int i = 0; i < t_1; ++i) {
		if (vetor_1[i] % 2 == 0) {
			pares[count] = vetor_1[i];
			count++;

		}

	}

	for (int i = 0; i < count; ++i) {
		printf("%i ", pares[i]);

	}

}


int main() {
	int nums[10];

	printf("GERANDO 10 NUMEROS ALEATÓRIOS: \n");
	vetorAleatorio(nums, 10);

	for (int i = 0; i < 10; ++i) {
		printf("%i ", nums[i]);

	}

	printf("\n\nNumeros pares capturados:\n");

	vetorPar(nums, 10);

	printf("\n");

	return 0;
}
