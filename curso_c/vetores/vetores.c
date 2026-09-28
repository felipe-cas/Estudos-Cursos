#include <stdio.h>

int main() {
	int vetor[5] = {010, 32, 9, 2, 3};

	printf("vetor: %i\n", vetor);
	printf("Valores do vetor: ");


	for (int i = 0; i < 5; ++i) {
		printf("%i ", vetor[i]);

	}

	printf("\n");

	return 0;
}
