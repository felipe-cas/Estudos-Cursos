#include <stdio.h>

int main() {
	float num1, num2;
	char ope;

	printf("DIGITE DOIS VALORES:\n");
	scanf("%f %f", &num1, &num2);

	printf("DIGITE UM OPERADOR:");
	scanf(" %c", &ope);

	switch (ope) {
		case '+':
			printf("\n%f + %f = %.2f\n", num1, num2, num1 + num2);
			break;

		case '-':
			printf("\n%f - %f = %.2f\n", num1, num2, num1 - num2);
			break;

		case '*':
			printf("\n%f * %f = %.2f\n", num1, num2, num1 * num2);
			break;

		case '/':
			if (num2 == 0) {
				printf("\nOPERAÇÃO INVALIDA!\nIMPOSSIVEL DIVIDIR POR 0\n");
			} else {
				printf("\n%f / %f = %.2f\n", num1, num2, num1 / num2);
			}

			break;

		default:
			printf("\nOPERADOR INVALIDO!\n");
	}

	return 0;
}
