# include <stdio.h>

int main() {
	int opc;
	float nota, freq;

	printf("=========== MENU DE APROVAÇÃO ===========\n");
	printf("\n1- VERIFICAR APROVAÇÃO\n2- SAIR\n");
	printf("\nOPÇÃO: ");
	scanf("%i", &opc);

	switch (opc) {
		case 1:
			printf("\nDIGITE A NOTA FINAL DO ALUNO: ");
			scanf("%f", &nota);

			printf("DIGITE A FREQUENCIA DO ALUNO(%%): ");
			scanf("%f", &freq);

			printf("\nSITUAÇÃO DO ALUNO: ");

			if (nota >= 7 && freq >= 75) {
				printf("APROVADO!\n");
			} else {
				printf("REPROVADO!\n");
			}

		case 2: printf("\nENCERRANDO PROGRAMA...\n"); break;

		default: printf("\nOPÇÃO INVALIDA!\n");
	}

	return  0;
}
