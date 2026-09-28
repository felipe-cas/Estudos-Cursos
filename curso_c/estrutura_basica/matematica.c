#include <stdio.h>

int main() {
	int num1, num2;

	printf("DIGITE O PRIMEIRO NUMERO: ");
	scanf("%i", &num1);

	printf("DIGITE O SEGUNDO NUMERO: ");
	scanf("%i", &num2);

	printf("\n");
	printf("ADICAO: %i \n", num1 + num2);
	printf("SUBTRACAO: %i \n", num1 - num2);
	printf("MULTIPLICACAO: %i \n", num1 * num2);
	printf("DIVISAO: %i \n", num1 / num2);
	printf("MODULO: %i \n", num1 % num2);

	return 0;
}
