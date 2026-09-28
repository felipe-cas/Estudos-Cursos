#include <stdio.h>

int main() {
	int capacidade, quantidade;
	float porcentagem;

	printf("INFORME AS QUANTIDADES A SEGUIR\n");

	printf("\nCAPACIDADE TOTAL DO ESTADIO: ");
	scanf("%i", &capacidade);

	printf("QUANTIDADE DE TORCEDORES PRESENTES:");
	scanf("%i", &quantidade);

	porcentagem = (float) quantidade * ((float)100 / capacidade);
	printf("\nCLASSIFICAÇÃO DO NIVEL DA PARTIDA: %.2f%%\n", porcentagem);


	if (porcentagem > 90) {
		printf("ESTADIO LOTADO!\n");

	} else if (porcentagem >= 70 && porcentagem <= 90) {
		printf("ÓTIMA PRESENÇA DE PÚBLICO!\n");

	} else if (porcentagem >=50 && porcentagem <= 70) {
		printf("PÚBLICO RAZOAVEL.\n");

	} else if (porcentagem < 50) {
		printf("!!!!!MORUMBISSSS!!!!!\n");

	} else {
		printf("OXI???COMO????\n");

	}

	return 0;
}
