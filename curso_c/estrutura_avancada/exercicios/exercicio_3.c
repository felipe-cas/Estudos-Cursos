#include <stdio.h>
#include <stdlib.h>


typedef struct lista {
	int valor;
	struct lista *prox;
} lista;


void mostraLista(lista *ptr) {
	do {
		printf("%3d", ptr->valor);
		ptr = ptr->prox;
	} while (ptr != NULL);
	printf("\n");
}


int main() {
	lista *head=NULL, *temp=NULL, *atual=NULL;

	for (int i = 0; i < 5; i++) {
		temp = malloc(sizeof(lista));

		printf("Digite o %d° valor: ", i+1);
		scanf("%d", &temp->valor);
		temp->prox = NULL;

		if (atual == NULL) {
			head = temp;
			atual = temp;
		} else {
			atual->prox = temp;
			atual = temp;
		}
	}

	printf("\nValores na Lista Encadeada:\n");
	mostraLista(head);

	return 0;
}
