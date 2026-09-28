#include <stdio.h>

int main() {
	int tent = 0, num, sec_num = 7;

	printf("================ JOGO DE ADVINHA ================\n");
	printf("TENTE ADIVINHAR O NUMERO SECRETO ENTRE 1 E 10\n\n");

	do {
		printf("DIGITE UM NUMERO: ");
		scanf("%i", &num);
		tent++;

		if (num < sec_num) {
			printf("HMMMM QUASE! UM POUQUINHO MAIS...\n\n");

		} else if (num > sec_num) {
			printf("HMMMM QUASE! UM POUQUINHO MENOS...\n\n");

		}

	} while (num != sec_num);

	printf("\n!!!PARABENS!!! VOCÊ CONSEGUIU ACERTAR O NUMERO SECRETO!!!\n");
	printf("NUMERO DE TENTATIVAS: %i\n", tent);

	return 0;
}
