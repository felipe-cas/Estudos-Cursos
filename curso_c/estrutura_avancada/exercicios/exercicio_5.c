#include <stdio.h>
#include <string.h>

char pilha[30];
int tamPilha = 30;
int posx = 0;

char *ptr_pilha = pilha;
int *ptr_tam = &tamPilha;
int *ptr_posx = &posx;

void push(char valor) {
	if (*ptr_posx == *ptr_tam) {
		printf("PILHA CHEIA!\n");
	} else {
		ptr_pilha[*ptr_posx] = valor;
		*ptr_posx += 1;
	}
}

void pop() {
	if (*ptr_posx < 0) {
		printf("PILHA VAZIA!\n");
	} else {
		*ptr_posx -= 1;
	}
}

char top() {
	if (*ptr_posx < 0) {
		printf("PILHA VAZIA!\n");
	} else {
		return ptr_pilha[*ptr_posx];
	}
}


int main() {
	char expr[100];
	int tam;

	printf("ENTRADA -> ");
	fgets(expr, sizeof(expr), stdin);
	tam = strlen(expr);

	for (int i = 0; i < tam; i++) {
		if (expr[i] == '(') {
			push(expr[i]);
		} else if (expr[i] == ')') {
			pop();
		}
	}

	if (*ptr_posx <= 0) {
		printf("SAIDA -> Balanceado\n");
	} else {
		printf("SAIDA -> Não Balanceado\n");
	}


	return 0;
}
