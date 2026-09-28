#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numrandom(int unsigned *seed) {
	return rand_r(seed) % 10;

}

int main() {
	int notas[3][2];
	int unsigned seed = time(NULL);

	for (int i = 0; i < 3; ++i) {//linhas
		for (int j = 0; j < 2; ++j) {//colunas
			notas[i][j] = numrandom(&seed);

			printf("Nota (%i, %i): %i\n", i, j, notas[i][j]);
		}

}

	return 0;
}
