#include <stdio.h>
#include <stdlib.h> //UTILIDADES GERAIS

/*

- rand()  - GERA UM NUMERO ALEATÓRIO
- srand() - INICIALIZA O GERADOR COM UMA SEED
- atoi(), atof() - CONVERTE STRING PARA INT E FLOAT
- exit()  - ENCERRA O PROGRAMA

*/

int main(void) {
	int num;

	printf("QUQNTOS NUMEROS DESEJA GERAR: ");
	scanf("%i", &num);

	for (int i = 1; i <= num; ++i) {
		printf("ITERAÇÃO: %i, RAND: %i\n", i, rand() % 100);
	}
}
