#include <stdio.h>
#include <stdlib.h>


struct no {
	int valor;
	struct no *prox;

};


int main() {
	struct no *n1 = malloc(sizeof(struct no));
	struct no *n2 = malloc(sizeof(struct no));

	n1->valor = 42;
	n1->prox = n2;

	n2->valor = 55;
	n2->prox = NULL;

	printf("Primeiro numero: %d\n", n1->valor);
	printf("Segundo numero: %d\n", n1->prox->valor);


	return 0;
}
