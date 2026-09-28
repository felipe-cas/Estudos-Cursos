#include <stdio.h>
#include <string.h>

int main() {
	char nomes[5][20], carc;
	int tam;

	printf("Digite 5 nomes quaisquer:\n\n");

	for (int i = 0; i < 5; ++i) {
		printf("%i° Nome: ", i+1);
		scanf("%s", &nomes[i]);

	}

	printf("\nDigite um caractere delimitador: ");
	scanf(" %c", &carc);

	printf("\nFiltrando nomes pelo digito delimitador:\n\n");

	for (int i = 0; i < 5; i++) {
		tam = strlen(nomes[i]);

		for (int j = 0; j < tam; j++) {
			if (nomes[i][j] == carc) {
				printf(" - %s\n", nomes[i]);
				break;

			}

		}

	}

	return 0;
}
