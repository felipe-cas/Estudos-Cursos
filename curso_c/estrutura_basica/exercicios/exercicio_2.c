#include <stdio.h>

int main() {
	int gols, partidas;
	float media;

	printf("\nNUMERO TOTAL DE GOLS: ");
	scanf("%i", &gols);

	printf("NUMERO DE PARTIDAS: ");
	scanf("%i", &partidas);

	media = (float) gols / partidas;

	printf("\nA MEDIA DE GOLS POR PARTIDA FOI: %.1f\n", media);

	return 0;
}
