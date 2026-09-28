#include <stdio.h>

int main() {
	int senha;

	do {
		printf("\nQUALÉ A SENHA CHARÁ: ");
		scanf("%i", &senha);
	} while (senha != 1234);

	printf("SENHA CORRETA!!!");

	return 0;
}
