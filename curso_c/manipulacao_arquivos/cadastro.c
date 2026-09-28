#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int verifArq(FILE *ptr) {
	if (ptr == NULL) {
		printf("ERRO AO ABRIR ARQUIVO: \"cadastro.save\"\n");
		return 1;
	};
	return 0;
}


void printfCadastro(FILE *ptr) {
	if (verifArq(ptr)) return;

	char nome[30];
	while (fgets(nome, sizeof(nome), ptr) != NULL) {
		printf("NOME ->  %s", nome);
	}
}


void addCadastro(FILE *ptr, char nome[]) {
	if (verifArq(ptr)) return;
	fprintf(ptr, "%s", nome);
}


FILE* abrirCadastro() {
	FILE *dados = fopen("cadastro.save", "a+");
	if (verifArq(dados)) {
		dados = NULL;
	} else {
		return dados;
	}
}


void printfMenu() {
	printf("\n--------------- CADASTRO ---------------\n\n");
	printf("[1] Novo Cadastro        [2] Cadastros\n");
	printf("[3] Excluir cadastro     [0] Sair\n");
	printf("Opção: ");
}


int main() {
	int opt;

	do {
		FILE *dados = abrirCadastro();
		printfMenu();
		scanf("%d", &opt);

		switch (opt) {
			case 0:
				break;

			case 1:
				if (verifArq(dados)) break;

				char nome[30];
				printf("NOME ->  ");
				getchar();
				fgets(nome, sizeof(nome), stdin);

				printf("Adicionando Cadastro...\n");
				addCadastro(dados, nome);
				sleep(1);
				break;

			case 2:
				if (verifArq(dados)) break;

				printf("\n---------- NOMES CADASTRADOS -----------\n\n");
				printfCadastro(dados);
				sleep(4);
				break;

			case 3:
				if (verifArq(dados)) break;

				printf("Excluido Cadastro...\n");
				system("rm cadastro.save");
				sleep(2);
				break;

			default:
				printf("Opção Invalida!!!\n");
		}

		if (verifArq(dados) == 0) fclose(dados);
		system("clear");

	} while (opt!=0);

	return 0;
}
