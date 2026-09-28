#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int valor_random() {
	return rand() % 50000;
}


int main() {
	int arrecadado[2][3], soma = 0;
	srand(time(NULL));

	for (int i = 0; i < 2; ++i) {//agencias
		for (int j = 0; j < 3; ++j) {//valor
			arrecadado[i][j] = valor_random();
			printf("Agência %i, Dia %i: R$ %i\n", i+1, j+1, arrecadado[i][j]);
			soma += arrecadado[i][j];

		}

	}

	printf("\nTOTAL ARRECADADO:\n\nR$ %i\n", soma);
	return 0;
}
