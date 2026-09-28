#include <stdio.h>

int main() {
	float sal1, sal2, dif;

	printf("DIGITE O SALARIO DO PRIMEIRO JOGADOR: ");
	scanf("%f", &sal1);

	printf("DIGITE O SALARIO DO SEGUNDO JOGADOR: ");
	scanf("%f", &sal2);

	printf("\nA DIFERENCA DE SALARIO DO DOIS JOGADORES É:\n");

	if (sal1 < sal2) {
		dif = sal2 - sal1;
		printf("\nJOGADOR_2: R$ %.2f - JOGADOR_1: R$ %.2f = R$ %.2f\n", sal2, sal1, dif);

	} else {
		dif = sal1 - sal2;
		printf("\nJOGADOR_2: R$ %.2f - JOGADOR_1: R$ %.2f = R$ %.2f\n", sal2, sal1, dif);

	}


	return 0;
}
