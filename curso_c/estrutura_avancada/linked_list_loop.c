#include <stdlib.h>
#include <stdio.h>

struct no {
	int valor;
	struct no *prox;

};

typedef struct no no;


int main() {
	int tam;
	no *n1=NULL, *n2=NULL, *aux=NULL;

	printf("Digite um Numero: ");
	scanf("%d", &tam);

	for (int i = 0; i < tam; i++) {
		no *novo = malloc(sizeof(no));

		printf("Digite o valor para o %d° membro: ", i+1);
		scanf("%d", &novo->valor);

		novo->prox = NULL;

		if (n1 == NULL) {
			n1 = novo;
			n2 = novo;
		} else {
			n2->prox = novo;
			n2 = novo;
		}

	}

	aux = n1;
	do {
		printf("Valor: %d\n", aux->valor);
		aux = aux->prox;

	} while (aux != NULL);

	return 0;
}
