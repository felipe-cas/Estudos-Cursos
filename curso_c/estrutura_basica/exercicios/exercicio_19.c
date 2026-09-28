#include <stdio.h>

int main() {
	int num;
	int par = 2;

	printf("DIGITE UM NUMERO: ");
	scanf("%i", &num);

	for (int i = 1; i <= num; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("%i ", par);
			par = par + 2;
		}
		printf("\n");
	}

	return 0;
}
