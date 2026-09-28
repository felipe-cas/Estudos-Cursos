#include <stdio.h>

void fibonacci(int n) {
	static unsigned long long ant = 1, soma = 0, aux;
	if (n == 0) return;

	printf("%d   ", soma);

	aux = soma;
	soma += ant;
	ant = aux;

	fibonacci(--n);

}

int main() {
	int num;

	printf("Digite o tamanho da sequencia de fibonacci: ");
	scanf("%d", &num);

	fibonacci(num);
	printf("\n");
	return 0;
}
