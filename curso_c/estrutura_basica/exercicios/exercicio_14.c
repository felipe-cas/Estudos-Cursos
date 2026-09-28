#include <stdio.h>

int main() {
	int num;
	int soma = 0;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	for (int i = 1; i <= num; ++i) {
		soma += i;
	}

	printf("A SOMA DE 1 ATÉ %i É: %i\n", num, soma);
	printf("(CÁLCULO:");

	for (int i = 1; i <= num; ++i) {
		if (i == num) {
			printf("%i = %i)\n", i, soma);
		} else {
			printf("%i + ", i);
		}
	}

	return 0;
}
