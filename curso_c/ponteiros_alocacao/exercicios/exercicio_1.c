#include <stdio.h>

int soma(int *a, int *b) {
	return *a + *b;
}


int main() {
	int n1 = 3, n2 = 5, res;
	int *ptr1, *ptr2;

	ptr1 = &n1;
	ptr2 = &n2;

	res = soma(ptr1, ptr2);
	printf("A soma de %i e %i é igual a %i\n", *ptr1, *ptr2, res);

	return 0;
}
