#include <stdio.h>

int main() {
	int pontos, vit, emp, der;

	printf("DIGITE O TOTAL DE VITORIAS DO TIME: ");
	scanf("%i", &vit);

	printf("DIGITE O TOTAL DE EMPATES DO TIME: ");
	scanf("%i", &emp);

	printf("DIGITE O TOTAL DE DERROTAS DO TIME: ");
	scanf("%i", &der);

	pontos = (vit*3) + emp;

	printf("O TOTAL DE PONTOS DO TIME FOI: %i\n", pontos);

	return 0;
}
