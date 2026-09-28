#include <stdio.h>

int main() {
	float notas[3][4];

	for (int i = 0; i < 3; ++i) {//aluno
		float media = 0;

		for (int j = 0; j < 4; ++j) {//prova
			printf("ALUNO %i, PROVA %i: ", i+1, j+1);
			scanf("%f", &notas[i][j]);

			media += notas[i][j];

		}

		printf("\nMédia do Aluno %i: %.1f\n\n", i+1, (media / 4));

	}

	return 0;
}
