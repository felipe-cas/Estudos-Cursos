#include <stdio.h>

int recorde = 5000;

int main() {
	int score[5];

	printf("Digite os 5 scores do jogador:\n\n");

	for (int i = 0; i < 5; ++i) {
		printf("SCORE %i: ", i + 1);
		scanf("%i", &score[i]);

		if (score[i] > recorde) {
			printf("Parabens! Score %i superou o recorde de %i\n", score[i], recorde);
			recorde = score[i];

		}

	}

	return 0;
}
