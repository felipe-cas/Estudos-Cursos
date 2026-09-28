#include <stdio.h>

struct Pessoa {
	char nome[50];
	int idade;
	float altura;

};

int main() {

	struct Pessoa p1;

	printf("Digite o Nome: ");
	fgets(p1.nome, sizeof(p1.nome), stdin);

	printf("Digite a idade: ");
	scanf("%d", &p1.idade);

	printf("Digite a altura(M): ");
	scanf("%f", &p1.altura);

	printf("\n---------------------------\n\n");
	printf("NOME: %s", p1.nome);
	printf("IDADE: %d\n", p1.idade);
	printf("ALTURA: %f\n", p1.altura);

	return 0;
}
