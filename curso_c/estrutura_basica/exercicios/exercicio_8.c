#include <stdio.h>

int main() {
	int gols;

	printf("DIGITE QUANTOS GOLS FOI MARCADO PELO JOGADOR: ");
	scanf("%i", &gols);

	if (gols > 10) {
		printf("O JOGADOR TEVE UMA EXCELENTE TEMPORADA!\n");

	} else if (gols < 5) {
		printf("O JOGADOR TEVE UMA TEMPORADA ABAIXO DO ESPERADO!\n");

	} else {
		printf("O JOGADOR TEVE UMA BOA TEMPORADA!\n");

	}

	return 0;
}
