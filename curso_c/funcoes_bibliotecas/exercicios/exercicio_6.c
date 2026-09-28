#include <stdio.h>

float calcMedia(float n1, float n2, float n3) {
        return (n1 + n2 + n3) / 3;  
}


float lerNotas() {
	float n1, n2, n3;

	printf("\n");

	printf("DIGITE A 1° NOTA DO JOGADOR: ");
	scanf("%f", &n1);

        printf("DIGITE A 2° NOTA DO JOGADOR: ");
        scanf("%f", &n2);

        printf("DIGITE A 3° NOTA DO JOGADOR: ");
        scanf("%f", &n3);

	return calcMedia(n1, n2, n3);

}


void classificar(float media) {

	printf("\n----------------------\n");
	printf("CLASSIFICAÇÃO DO JOGADOR: ");

	if (media >= 9) {
	printf("EXCELENTE ");

	} else if (media < 5) {
	printf("RUIM ");

	} else if (media >= 7) {
	printf("BOM ");

	} else {
	printf("REGULAR ");

	}

	printf("(MÉDIA: %.2f)\n", media);
	printf("----------------------\n");

}


int main() {
	int quant;

	printf("QUANTOS JOGADORES DESEJA CLASSIFICAR: ");
	scanf("%i", &quant);

	for (int i = 1; i <= quant; i++) {
		printf("\nJOGADOR %i", i);
		printf("\n----------------------\n");
		float media = lerNotas();
		classificar(media);

	}

	return 0;
}
