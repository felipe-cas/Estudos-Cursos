#include <stdio.h>

int main() {
	int quant, ano, aux;
	char modelo[20];

	printf("DIGITE QUANTOS CARROS DESEJA CADASTRAR: ");
	scanf("%i", &quant);

	for (quant; quant > 0; --quant) {

		printf("DIGITE O MODELO DO CARRO: ");
		scanf("%s", &modelo);

		printf("DIGITE O ANO DO CARRO: ");
		scanf("%i", &ano);

		printf("O CARRO ESTA FUNCIONANDO NORMALMENTE? ");
		scanf("%i", &aux);

		printf("\nO CARRO %s ", modelo);

		if (ano < 2005 && aux == 0) {
			printf("PRECISA DE REPAROS URGENTES!!!\n");

		} else if (ano < 2005 && aux == 1) {
			printf("É ANTIGO, RECOMENDA-SE UMA REVISÃO!\n");

		} else if (aux == 0) {
			printf("PRECISA DE MANUTENÇÃO!\n");

		} else {
			printf("ESTÁ EM BOAS CONDIÇÕES!\n");

		}

		printf("---------------------------\n");
	}

	return 0;
}
