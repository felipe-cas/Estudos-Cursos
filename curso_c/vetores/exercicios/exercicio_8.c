#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void mostra_matriz(int matriz[4][4]) {
	for (int i = 0; i < 4; ++i) {//linhas
		for (int j = 0; j < 4; ++j) {//colunas
			printf("%5i", matriz[i][j]);

		}
		printf("\n");

	}

}


int main() {
	int mat[4][4], soma = 0;
	srand(time(NULL));

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			mat[i][j] = rand() % 20 + 1;

			if (i == j) {
				soma += mat[i][j];
			}
		}
	}


	printf("MATRIZ GERADA:\n");
	mostra_matriz(mat);
	printf("\nSOMA DA DIAGONAL PRINCIPAL: %i\n", soma);

	return 0;
}
