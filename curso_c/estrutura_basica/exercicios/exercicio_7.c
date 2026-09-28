#include <stdio.h>

int main() {
	int idade;

	printf("DIGITE A IDADE DO JOGADOR: ");
	scanf("%i", &idade);

	if (idade <= 20) {
		printf("O JOGADOR ESTA APTO A JOGAR NA CATEGORIA SUB-20\n");

	} else {
		printf("O JOGADOR ESTA APTO A JOGAR NA CATEGORIA PROFISSIONAL\n");

		}

	return 0;
}
