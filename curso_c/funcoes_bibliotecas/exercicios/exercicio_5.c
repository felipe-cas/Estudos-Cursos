#include <stdio.h>

void makeSquare(int t, char ca) {
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; ++j) {
			printf(" %c", ca);

		}
		printf("\n");
	}
}

int main() {
	int tam;
	char carc;

	printf("DIGITE O TAMANHO DA QUADRADO: ");
	scanf("%i", &tam);

	printf("DIGITE O CARACTERE ALEATÓRIO: ");
	scanf(" %c", &carc);

	printf("\n");
	makeSquare(tam, carc);

	return 0;
}
