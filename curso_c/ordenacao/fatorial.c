#include <stdio.h>

int fatorial(int n) {
	static int fat = 1;

	if (n == 0) return fat;

	fat *= n;
	fatorial(--n);
}

int main() {
	int num;

	printf("Digite um numero para calcular seu Fatorial: ");
	scanf("%d", &num);

	int fat = fatorial(num);

	printf("O fatorial de %d é %d\n", num, fat);
	return 0;
}
