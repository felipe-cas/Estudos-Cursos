#include <stdio.h>

int matIdent(int matriz[4][4]) {
	int aux = 0;

        for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
			if (i == j && matriz[i][j] != 1) {
				aux = 1;
				break;
			} else if (i != j && matriz[i][j] != 0) {
				aux = 1;
				break;

			}

                }
        }
	if (aux == 0) {
		return 1;
	} else {
		return 0;
	}

}

void mostraMatriz(int matriz[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("%3i ", matriz[i][j]);
		}
		printf("\n");
	}

}


int main() {
	int matriz[4][4];

	printf("Preencha a matriz 4x4:\n\n");

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("ELEMENTO [%i][%i]: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}

	printf("Matriz Identadade? ");
	if (matIdent(matriz) == 1) {
		printf("SIM\n\n");
	} else {
		printf("NÃO\n\n");
	}
	mostraMatriz(matriz);

	return 0;
}
