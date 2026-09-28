#include <stdio.h>

int main() {
	char nome[16];
	int idade, gols;

	printf("\nDIGITE SEU PRIMEIRO NOME: ");
	scanf("%15s", &nome);

	printf("DIGITE SUA IDADE: ");
	scanf("%2i", &idade);

	printf("DIGITE QUANTOS GOLS FEZ NA CARREIRA: ");
	scanf("%i", &gols);

	//MONTANDO APRESENTAÇÃO
	printf("\nJOGADOR: %s ---- IDADE: %i \n", nome, idade);
	printf("GOLS NA CARREIRA: %i \n", gols);

	if (gols >= 800) {

		printf("\nJOGADOR TOP ESSE!!!\n");
	}

	return 0;
}
