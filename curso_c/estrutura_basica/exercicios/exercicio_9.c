#include <stdio.h>

int main() {
	int gols, idade;

	printf("DIGITE A IDADE DO JOGADOR: ");
	scanf("%i", &idade);

	printf("DIGITE QUANTOS GOLS O JOGADOR FEZ: ");
	scanf("%i", &gols);

	printf("\nO JOGADOR FOI CLASSIFICADO COMO:\n");


	if (idade <= 20 && gols > 10) {
		printf("JOVEM TALENTO PROMISSOR!\n");

	} else if (idade <= 20 && gols <= 10) {
		printf("JOVEM EM DESENVOLVIMENTO!\n");

	} else if (idade > 20 && gols > 15) {
		printf("JOGADOR EXPERIENTE EM GRANDE FASE!\n");

	} else if (idade > 20 && gols <= 15) {
		printf("!!!!!ESTEVÃO!!!!!\n");

	}

	return 0;
}
