#include <stdio.h>

void mostraMatriz1(int matriz[3][2]) {
	for (int i = 0; i < 3; ++i) {
		printf("| ");
		for (int j = 0; j < 2; ++j) {
			printf("%3i ", matriz[i][j]);
		}
		printf(" |\n");
	}

}


void mostraMatriz2(int matriz[2][3]) {
        for (int i = 0; i < 2; ++i) {
                printf("| ");
                for (int j = 0; j < 3; ++j) {
                        printf("%3i ", matriz[i][j]);
                }
                printf(" |\n");
        }

}


void transpoMatriz(int matriz[3][2]) {
	int matriz_transpo[2][3];

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			matriz_transpo[i][j] = matriz[j][i];
		}
	}

	mostraMatriz2(matriz_transpo);

}


int main() {
	int matriz[3][2];

	printf("Digite os 6 valores da matriz 3x2 (linha por linha):\n\n");

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("Elemento [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}

	printf("\nMatriz Original:\n");
	mostraMatriz1(matriz);
	printf("\nMatriz Transposta:\n");
	transpoMatriz(matriz);

	return 0;
}
