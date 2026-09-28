#include <stdio.h>

int main() {
	int moedas, rodadas = 0, total = 0;

	do {
		printf("DIGITE QUANTAS MOEDAS VC COLETOU(0-10): ");
		scanf("%i", &moedas);

		if (moedas > 10 || moedas < 1) {
			printf("NUMERO DE MOEDAS INVALIDAS!!!\n\n");

		} else {
			total += moedas;
			rodadas++;
			printf("TOTAL: %i | RESTANTES: %i\n\n", total, 100 - total );

		}
	} while (total <= 100);

	printf("VOCE FEZ %i RODADAS PARA ATINGIR 100 PONTOS\n", rodadas);

	return 0;
}
