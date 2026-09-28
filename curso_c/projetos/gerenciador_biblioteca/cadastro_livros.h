#ifndef CADASTRO_LIVROS_H
#define CADASTRO_LIVROS_H

int cadastra_livro(char tit[], char aut[], int qt, int qd, FILE *ptr);

typedef struct Livros {
	char titulo[50], autor[30];
	int quant_total, quant_disponivel;
}livros;

#endif
