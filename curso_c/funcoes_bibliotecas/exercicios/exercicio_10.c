#include <stdio.h>
#include <string.h>
#include <locale.h>

int valida_nome(char nome[]) {
	if (strlen(nome) > 50) {// VERIFICA O TAMANHO
		printf("NOME INVALIDO! TAMANHO MAXIMO DE 50 CARACTERES\n");
		return 0;

	} else {
		int count = 0;
		for (int i = 0; nome[i] != '\0'; ++i) {// VERIFICA CARACTERES INVALIDOS
			switch(nome[i]) {
				case '@':
					count++;
					break;

                                case '#':
                                        count++;
                                        break;

                                case '$':
                                        count++;
                                        break;

                                case '%':
                                        count++;
                                        break;

                                case '!':
                                        count++;
                                        break;

			}

		}

		if (count != 0) {//POSSUI CARACTERES INVALIDOS
			printf("NOME INVALIDO! %i CARACTERE(S) INVALIDO(S)!\n", count);
			return 0;

		} else {
			printf("ESTE É UM NOME VALIDO!\n");
			return 1;

		}

	}

}



int main() {
	setlocale(LC_ALL, " ");

	char nome[50];
	int aux;

	printf("DIGITE SEU NOME DE USUARIO: ");
	scanf(" %s", nome);

	aux = valida_nome(nome);

	if (aux) {
		printf("PROSSIGA PARA O JOGO!!!\n");
	} else {
		printf("TENTE NOVAMENTE!\n");
	}

	return 0;
}
