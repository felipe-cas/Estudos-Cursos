#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numAleatorio(int unsigned *seed) {
	return rand_r(seed) % 60;
}

int main() {
	int fe[6], megasena[6], acertos[6], count = 0;
	int unsigned seed = time(NULL);

	for (int i = 0; i < 6; ++i) {
		printf("Digite um numero para sua fézinha: (%i°) ", i + 1);
		scanf("%i", &fe[i]);

		megasena[i] = numAleatorio(&seed);

	}


	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 6; ++j) {
			if (fe[i] == megasena[j]) {
				count++;

			}

		}

	}


	printf("\nOs numeros sorteados foram: ");

	for (int i = 0; i < 6; ++i) {
		printf("%i ", megasena[i]);

	}

	printf("\nVocê acertou %i/6 numeros\n", count);

	return 0;
}
