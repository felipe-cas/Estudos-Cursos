#include <stdio.h>

int main() {
	int num;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	for (int i = 1; i <= num; ++i) {
		for (int l = 1; l <= i; ++l) {
			printf("%i ", l);
		}
		printf("\n");
	}

	return 0;
}
