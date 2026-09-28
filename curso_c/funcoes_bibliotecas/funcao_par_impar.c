#include <stdio.h>

void par_impar (int n1) {
	printf("O NUMERO %i É ");

	if (n1 % 2 == 0) {
		printf("PAR\n");

	} else {
		printf("IMPAR\n");

	}
}


int main () {
	int num;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	par_impar(num);

	return 0;
}
