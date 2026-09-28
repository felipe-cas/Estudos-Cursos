#include <stdio.h>

int main() {
	int num;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	for (num; num > 0; --num) {
		for (int l = 1; l <= num; ++l) {
			printf("%i ", l);
		}
		printf("\n");
	}

	return 0;
}
