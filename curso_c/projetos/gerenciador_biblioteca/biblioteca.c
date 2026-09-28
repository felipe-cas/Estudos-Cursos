#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "cadastro_livros.h"


void printfMenu(int opt) {
	printf("\n---------- BIBLIOTECA ----------\n\n");

	switch (opt) {
	case 1:
		printf("[1] Cadastrar     [2] Emprestimos|Devoluções\n");
		printf("[0] Sair\n");
		break;

	case 2:
		printf("[1] Usuarios      [2] Livros\n");
		printf("[0] Voltar\n");
		break;

	case 3:
		printf("[1] Registrar Emprestimo\n");
		printf("[2] Registrar Devolução\n");
		printf("[0] Voltar\n");
		break;
	}
	printf("OPÇÃO:  ");
}


int main() {
	int opt = 0, menu = 1;
	livros livro;
	FILE *arq = fopen("banco_livros.save", "a+");

	do {
		printfMenu(menu);
		scanf("%d", &opt);
		switch (menu) {
			case 1://MENU 1
				switch (opt) {
					case 0:
						break;
					case 1:
						menu = 2;
						break;
					case 2:
						menu = 3;
						break;
					default:
						printf("OPÇÃO INVALIDA!\n");
						break;
				}
				break;

			case 2://MENU 2
				switch (opt) {
					case 0:
						menu = 1;
						opt = 1;
						break;
					case 1:
						printf("CALMA AI...\n");
						break;
					case 2:
						printf("\n---------- CADASTRAR LIVROS ----------\n\n");
						printf("TITULO:  ");
						scanf("%s", &livro.titulo);

						printf("AUTOR:  ");
						scanf("%s", &livro.autor);

						printf("QUANTIDADE TOTAL:  ");
						scanf("%d", &livro.quant_total);

						printf("QUANTIDADE DISPONIVEL:  ");
						scanf("%d", &livro.quant_disponivel);

						cadastra_livro(livro.titulo, livro.autor, livro.quant_total, livro.quant_disponivel, arq);
						break;
					default:
						printf("OPÇÃO INVALIDA!\n");
						break;
				}
				break;

			case 3://MENU 3
				switch (opt) {
					case 0:
						menu = 1;
						opt = 1;
						break;
					case 1:
						printf("CALMA AI...\n");
						break;
					case 2:
						printf("CALMA AI...\n");
						break;
					default:
						printf("OPÇÃO INVALIDA!\n");
						break;
				}
				break;
		}
		system("clear");
	} while (!(opt == 0 && menu == 1));

	return 0;
}
