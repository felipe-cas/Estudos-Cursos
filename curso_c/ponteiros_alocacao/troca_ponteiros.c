#include <stdio.h>

void troca(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;

}


int main() {
	int x = 10, y = 20;

	// x = 10, y = 20
	printf("Antes da troca: x = %i, y = %i\n", x, y);

	troca(&x, &y);

	// x= 20, y = 10
	printf("Depois da troca: x = %i, y = %i\n", x, y);

	return 0;
}
