#include <stdio.h>
#include <stdlib.h>

typedef union valor {
	int inteiro;
	float flutuante;
	char caracter;

} valor;

int main() {
	valor *val = malloc(sizeof(valor));

	int opt = 0, aux = 0;

	do {
		printf("\nQUAL TIPO DESEJA ARMAZENAR?\n");
		printf("[1] Int    [2] Float    [3] Char\n");
		printf("[0] sair   [9] Mostrar valor\n\n");
		printf("Opção: ");
		scanf("%d", &opt);

		switch (opt) {

			case 0:
				break;

			case 1:
				printf("\nDigite o valor: ");
				scanf("%d", &val->inteiro);
				break;

			case 2:
				printf("\nDigite o valor: ");
				scanf("%f", &val->flutuante);
				break;

			case 3:
				printf("\nDigite o valor: ");
				scanf(" %c", &val->caracter);
				break;

			case 9:
				printf("\nValor Armazenado: ");
				switch (aux) {
					case 1:
						printf("%d\n", val->inteiro);
						break;

					case 2:
						printf("%f\n", val->flutuante);
						break;

					case 3:
						printf("%c\n", val->caracter);
						break;

					default:
						printf("NULL\n");
						break;
				}
				break;
			default:
				printf("Opção Invalida!\n");
				break;
		}

		if (opt != 9) aux = opt;

	} while (opt != 0);

	free(val);

	return 0;
}
