#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void geraMatriz(int **matriz, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			matriz[i][j] = rand() % 10;
		}
	}

}


void mostraMatriz(int **matriz, int m, int n) {
        for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                        printf("%3d", matriz[i][j]);
                }
		printf("\n");
        }

}


void somaLinhas(int **matriz, int m, int n) {
	for (int i = 0; i < m; i++) {
		int soma = 0;

		for (int j = 0; j < n; j++) {
			soma += matriz[i][j];
		}
		printf("LINHA %2d°: %3d\n", i + 1, soma);
	}

}


void testAlloc(void *vet) {
	if (vet == NULL) {
		printf("ERRO DE ALOCAÇÃO DE MEMÓRIA\n");
		exit(1);

	}

}


int main() {
	int x, y;
	int **mat;

	srand(time(NULL));

	printf("Digite o tamanho da Matriz(X Y):\n");

	printf("Linhas: ");
	scanf("%d", &x);

	printf("Colunas: ");
	scanf("%d", &y);

	//ALOCANDO MATRIZ
	mat = malloc(sizeof(int*) * x);
	testAlloc(mat);

	for (int i = 0; i < x; i++) {
		mat[i] = malloc(sizeof(int) * y);
		testAlloc(mat[i]);

	}

	//GERA E MOSTRA MATRIZ
	geraMatriz(mat, x, y);
	printf("\nMatriz Gerada:\n\n");
	mostraMatriz(mat, x, y);


	//MOSTRA SOMA DE CADA LINHA
	printf("\nSoma de cada Linha:\n\n");
	somaLinhas(mat, x, y);

	free(mat);

	return 0;
}
