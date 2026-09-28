#include <stdio.h>

int maiorNumero(int n1, int n2, int n3) {
	if (n1 > n2 && n1 > n3) {
		return n1;
	} else if (n2 > n1 && n2 > n3) {
		return n2;
	} else {
		return n3;
	}
}


int main() {
	int num1, num2, num3;

	printf("DIGITE 3 NUMEROS:\n");
	scanf(" %i %i %i", &num1, &num2, &num3);

	printf("\nO MAIOR DENTRE ELES É: %i\n", maiorNumero(num1, num2, num3));

	return 0;
}
