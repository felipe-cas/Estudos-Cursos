#include <stdio.h>
#include <string.h>

union Pessoa {
	char nome[50];
	int idade;
	float altura;
};


int main() {

	union Pessoa p1;

	strcpy(p1.nome, "Felipe de Castro");
	printf("NOME: %s\n", p1.nome);

	p1.idade = 22;
	printf("IDADE: %d\n", p1.idade);

	p1.altura = 1.85;
	printf("ALTURA: %.2f\n", p1.altura);

	/*SE TENTAR-MOS PRIMEIRO ATRIBUIR OS VALORES E
	DEPOIS MOSTRA-LOS DE UMA VEZ, TEREMOS UM ERRO, POIS
	OS VALORES FORAM SOBRESCRITOS E TORNARAM-SE INVALIDOS.

	SOMENTE O ULTIMO VALOR ATRIBUIDO SERA VALIDO, POIS NADA
	O SOBRESCREVEU.

	*/

	return 0;
}
