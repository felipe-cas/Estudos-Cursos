#include <stdio.h>
#include <stdlib.h>

int tam_pilha = 10;
int pilha[10];
int posx = -1;

void push(int valor) {
        if (posx == tam_pilha) {
		printf("PILHA CHEIA\n");
	} else {
		posx++;
		pilha[posx] = valor;
	}
}


void pop() {
        if (posx == -1) {
                printf("PILHA VAZIA\n");
        } else {
                posx--;
        }
}


int top() {
	if (posx == -1) {
		printf("PILHA VAZIA\n");
	} else {
		return pilha[posx];
	}
}


int main() {
	push(5);
	push(6);
	push(7);

	printf("Numero: %d\n", top());

	pop();

	printf("Numero: %d\n", top());


	printf("PILHA: \n");
	for (int i = posx; i >= 0; i--) {
		printf("%d\n", pilha[i]);
	}


	return 0;
}

