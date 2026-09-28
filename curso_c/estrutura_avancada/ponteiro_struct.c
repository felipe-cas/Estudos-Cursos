#include <stdio.h>

struct Pessoa {
	char nome[50];
	int idade;
	float altura;
};


int main() {
	struct Pessoa p1 = {"Felipe de Castro", 22, 1.85};
	struct Pessoa *ptr = &p1;

	printf("NOME: %s\n", ptr->nome);
	printf("IDADE: %d\n", ptr->idade);
	printf("ALTURA: %.2f\n", ptr->altura);

	return 0;
}
