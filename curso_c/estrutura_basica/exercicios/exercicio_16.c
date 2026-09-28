#include <stdio.h>

int main() {
	int num;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	printf("NUMEROS PARES DE 1 ATÉ %i:\n", num);

	for (int i = 1; i <= num; ++i) {
		if (i % 2 == 0) {
			printf("%i ", i);
		}
	}

	return 0;
}
