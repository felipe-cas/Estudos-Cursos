#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
	char nome[30];
	int idade;
	float altura;

} pessoa;


int main() {

	pessoa *pessoas = malloc(sizeof(pessoa) * 3);
	int aux = 0, maxIdade = 0;

	for (int i = 0; i < 3; i++) {
		printf("\n-------- REGISTRO %d° PESSOA --------\n", i + 1);
		printf("Digite o nome: ");
		fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);

		printf("Digite a idade: ");
		scanf("%d", &pessoas[i].idade);

		if (pessoas[i].idade > maxIdade) {
			maxIdade = pessoas[i].idade;
			aux = i;
		}

		printf("Digite a altura: ");
		scanf("%f", &pessoas[i].altura);

		getchar();
	}

	printf("\nDados Registrados da Pessoa mais velha:\n");
	printf("NOME: %s", pessoas[aux].nome);
	printf("IDADE: %d\n", pessoas[aux].idade);
	printf("ALTURA: %.2f\n", pessoas[aux].altura);

	free(pessoas);

	return 0;
}
