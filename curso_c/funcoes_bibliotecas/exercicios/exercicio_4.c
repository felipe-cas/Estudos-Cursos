#include <stdio.h>

char* verifNota(int n) {
	if (n >= 6) {
		return "APROVADO";
	} else if (n <= 4) {
		return "REPROVADO";
	} else {
		return "RECUPERAÇÃO";
	}
}

int main() {
	float nota;

	printf("DIGITE A NOTA DO ALUNO: ");
	scanf("%f", &nota);

	printf("\nCLASSIFICAÇÃO DO ALUNO: %s\n", verifNota(nota));

	return 0;
}
