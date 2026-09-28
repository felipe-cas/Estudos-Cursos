#include <stdio.h>

void aumenta(int *n) {
	*n += 1;
}

int main() {
	int numero = 42;
	int *num = &numero;

	printf("\n==== MOSTRANDO AS VARIAVEIS ====\n\n");
	printf("Variavel numero: %i\n", numero);
	printf("Valor apontado pelo ponteiro num: %i\n", *num);

//	REATRIBUIÇÃO DE VALORES DE PONTEIROS
	printf("\nREATRIBUINDO AS VARIAVEIS PELOS PONTEIROS ====\n\n");
	printf("Antes: %i\n", numero);

	*num = 10;

	printf("Depois: %i\n", numero);


//	MOSTRANDO ENDEREÇOS E VALORES DE PONTEIROS

	printf("\n==== MOSTRANDO ENDEREÇOS E VALORES ====\n\n");
	*num = 42;

	printf("Endereço da variavel numero: %p\n", &numero);
	printf("Endereço do ponteiro num: %p\n", &num);
	printf("Valor armazenado no ponteiro num: %p\n", num);
	printf("Valor armazenado na variavel numero: %i\n",numero);
	printf("valor apontado pelo ponteiro num: %i\n", *num);


//	USANDO PONTEIROS EM FUNÇÕES

	printf("\n==== USANDO PONTEIROS EM FUNÇÕES ====\n\n");

	printf("Antes: %i\n", numero);

	aumenta(num);

	printf("Depois: %i (FUNÇÃO INCREMENTA 1)\n", numero);

	return 0;
}
