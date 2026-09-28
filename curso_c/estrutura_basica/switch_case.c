#include <stdio.h>

int main() {
	int dia;

	printf("DIGITE UM NUMERO DE 1 A 7: ");
	scanf("%i", &dia);

	switch (dia) {
		case 1:
			printf("SEGUNDA-FEIRA\n");
			break;

		case 2:
			printf("TERÇA-FEIRA\n");
                        break;

                case 3:
                        printf("QUARTA-FEIRA\n");
                        break;

                case 4:
                        printf("QUINTA-FEIRA\n");
                        break;

                case 5:
                        printf("SEXTA-FEIRA\n");
                        break;

                case 6:
                        printf("SÁBADO\n");
                        break;

                case 7:
                        printf("DOMINGO\n");
                        break;

		default:
			printf("NUMERO FORA DO ESCOPO!!!\n");
	}


	return 0;
}
