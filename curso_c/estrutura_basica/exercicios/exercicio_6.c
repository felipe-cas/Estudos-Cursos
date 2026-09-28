#include <stdio.h>

int main() {
	int qca;

	printf("DIGITE QUANTOS CARTÕES AMARELOS O JOGADOR RECEBEU: ");
	scanf("%i", &qca);

	if (qca > 2) {
		printf("\nO JOGADOR RECEBEU MAIS DE 2 CARTÕES AMARELOS\n");
		printf("O JOGADOR FOI EXPULSO E NÃO PODERA MAIS JOGAR!!!\n");

	} else {
		printf("\nO JOGADOR RECEBEU MENOS DE 2 CARTÕES AMARELOS\n");
		printf("O JOGADOR PODERA CONTINUAR JOGANDO!!!\n");

	}


	return 0;
}
