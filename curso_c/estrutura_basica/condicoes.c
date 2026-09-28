#include <stdio.h>

int main() {
	int idade;

	printf("DIGITE A SUA IDADE: ");
	scanf("%3i", &idade);

	if (idade < 18) {
		printf("VOCÊ É MENOR DE IDADE! RETORNE IMEDIATAMENTE!!!\n");
	} else {
		printf("VOCÊ É MAIOR DE IDADE! PORFAVOR PROSSIGA!!\n");
	}

	return 0;
}
