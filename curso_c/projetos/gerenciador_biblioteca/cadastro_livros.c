#include <stdio.h>

char vet[4][12] = {"TITULO", "AUTOR", "TOTAL", "DISPONIVEL"};

int verif_arq (FILE *ptr) {
	if (ptr == NULL) return 0;
	return 1;
}


int count_livros (FILE *ptr) {
	char aux;
	int count = 0;

	do {
		aux = fgetc(ptr);
		if (aux == '\n') count++;
	} while (aux != EOF);

	return count;
}


int cadastra_livro (char tit[], char aut[], int qt, int qd, FILE *ptr) {
	if (!(verif_arq(ptr))) return 0;

	int cod = count_livros(ptr);
	fprintf(ptr, "%d;%s;%s;%d;%d;\n", cod, tit, aut, qt, qd);
	return 1;
}

void mostrar_livros (FILE *ptr) {
	if (!(verif_arq(ptr))) return;

	char aux[100];
	int j;
	while (fgets(aux, 100, ptr) != NULL) {
		for (int i = 0; i < 4; i++) {
			printf("%s:  ", vet[i]);
			for (j = 0; aux[j] != ';'; j++) {
				printf("%s", aux[j]);
			}
		}
		printf("\n");
	}
}


int main () {
	FILE *arq = fopen("banco_livros.save","a+");

	mostrar_livros(arq);
	return 0;
}
