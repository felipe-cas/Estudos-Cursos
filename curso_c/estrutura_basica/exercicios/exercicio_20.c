#include <stdio.h>

int main() {
	int cadastro, estoque, minimo;
	char nome[20];

	//SOLICITANDO A QUANTIDADE DE PRODUTOS PARA CADASTRAR
	printf("QUANTIDADE DE PRODUTOS PARA CADASTRAR: ");
	scanf("%i", &cadastro);


	//CADASTRANDO PRODUTOS
	for (int i = 1; i <= cadastro; ++i) {
		printf("\nPRODUTO %i\n", i);
		printf("---------------------------\n");

		printf("NOME DO PRODUTO: ");
		scanf("%s", &nome);

		printf("QUANTIDADE EM ESTOQUE: ");
		scanf("%i", &estoque);

		printf("ESTOQUE MINIMO RECOMENDADO: ");
		scanf("%i", &minimo);

		printf("O PRODUTO %s ", nome);

		if (estoque < minimo) {
			printf("PRECISA SER REPOSTO! ");
		} else {
			printf("TEM ESTOQUE SUFICIENTE! ");
		}

		printf("(ESTOQUE: %i, MÍNIMO: %i)\n", estoque, minimo);

	}

	return 0;
}
