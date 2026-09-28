#include <stdio.h>

int main() {
	int num, base;

	printf("DIGITE A QUANTIDADE DE LINHAS: ");
	scanf("%i", &num);

	base = (2*num);
	printf("\n");

	for (int i = 0; i < num; ++i) {

		for (int j = 0; j < base; ++j) {

			if (j >= (num - i) && j <= (num + i)) {
				printf(" *");

			} else {
				printf("  ");

			}
		}
		printf("\n");

	}
	printf("\n");

	return 0;
}
