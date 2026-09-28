#include <stdio.h>

int main() {
	int num;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	for (num; num > 0; --num) {
		printf("NUMERO: %i\n", num);
	}

	return 0;
}
