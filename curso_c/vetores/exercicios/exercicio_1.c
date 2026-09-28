#include <stdio.h>

float calcMedia(int vetorFPS[]) {
	float media;

	for (int i = 0; i < 6; ++i) {
		media += vetorFPS[i];

	}

	return media / 6;

}


int main() {
	int fps[6];

	for (int i = 0; i < 6; ++i) {
		printf("Digite o FPS registrado(%i°):  ", i + 1);
		scanf("%i", &fps[i]);

	}

	printf("\nA média de FPS foi de: %.2f FPS\n", calcMedia(fps));


	return 0;
}
