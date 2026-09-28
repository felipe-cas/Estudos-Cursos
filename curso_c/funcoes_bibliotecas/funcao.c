#include <stdio.h>

int soma (int num1, int num2) {
	int resu;
	resu = num1 + num2;

	return resu;
}


int main() {
	int n1, n2;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &n1);

	printf("DIGITE OUTRO NUMERO: ");
	scanf("%i", &n2);


	printf("%i\n", soma(n1, n2));

	return 0;
}
