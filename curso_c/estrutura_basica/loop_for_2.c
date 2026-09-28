#include <stdio.h>

int main() {
	int tamanho;

	printf("TAMANHO DO QUADRADO: ");
	scanf("%i", &tamanho);

	printf("\n");

	for (int l = 0; l < tamanho; ++l) {

		for (int c = 0; c < tamanho; ++c) {
			printf(" *");
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}
