#include <stdio.h>

int main() {
	int num;

	printf("DIGITE O NUMERO PARA TABUADA: ");
	scanf("%i", &num);

	printf("============ TABUADA DO %i ============\n", num);

	for (int i = 0; i <= 10; ++i) {
		printf("%i x %i = %i\n", num, i, num * i);
	}

	return 0;
}
