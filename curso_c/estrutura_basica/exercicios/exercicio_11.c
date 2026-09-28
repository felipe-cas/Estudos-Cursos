#include <stdio.h>

int main() {
	int opc;

	printf("================== LANCHONETE DO BAIRRO ==================\n");
	printf("..................    MENU DE OPÇÕES    ..................\n\n");
	printf("      [1] HAMBÚRGUER               [2] CACHORRO QUENTE\n");
	printf("      [3] PIZZA                    [4] SAIR\n");

	printf("\nOPÇÃO: ");
	scanf("%i", &opc);

	printf("\n..........................................................\n");


	switch (opc) {

		case 1: printf("VOCÊ ESCOLHEU HÁMBURGUER!\nBOM APETITE!\n"); break;

		case 2: printf("VOCÊ ESCOLHEU CACHORRO-QUENTE!\nBOM APETITE!\n"); break;

		case 3: printf("VOCÊ ESCOLHEU PIZZA!\nBOM APETITE!\n"); break;

		case 4: printf("SAINDO DO PROGRAMA...\nVOLTE SEMPRE!!!\n"); break;

		default: printf("OPÇÃO INVALIDA!\n");
	}

	return 0;
}
