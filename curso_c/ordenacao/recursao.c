#include <stdio.h>

void contar(int n) {
	if (n > 5) return;
	printf("NUMERO: %d\n", n);
	contar(++n);
}

int main() {
	contar(1);

	return 0;
}
