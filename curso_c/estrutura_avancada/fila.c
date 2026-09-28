#include <stdio.h>

int fila[10];
int posx = 0, tam = 10;


void enqueue(int valor) {
	if (posx == tam) {
		printf("FILA CHEIA\n");
		return;
	}

	fila[posx] = valor;
	posx++;
}


void dequeue() {
	if (posx == 0) {
		printf("FILA VAZIA\n");
		return;
	}

	for (int i = 0; i < posx - 1; i++) {
		fila[i] = fila[i+1];
	}
	posx--;
}


int main() {

	enqueue(10);
        enqueue(20);
        enqueue(30);
        enqueue(40);

	printf("Primeiro elemento da fila: %d\n", fila[0]);
	printf("Tamanho da fila: %d\n", posx);

	dequeue();
	dequeue();

        printf("Primeiro elemento da fila: %d\n", fila[0]);
        printf("Tamanho da fila: %d\n", posx);

	enqueue(10);
	enqueue(20);

	printf("Elementos da fila:\n");
	for (int i = 0; i < posx; i++) {
		printf("%4d", fila[i]);
	}

	printf("\n");



	return 0;
}
