#include <stdio.h>

int maiorNum(int vetoresNUM[]) {
	int maior = 0;

	for (int i = 0; i < 4; ++i) {
		if (vetoresNUM[i] > maior) {
			maior = vetoresNUM[i];

		}

	}

	return maior;

}


int main() {
	int ataques[4];

	printf("Registre 4 pontos de ataques: \n\n");

	for (int i = 0; i < 4; ++i) {
		printf("Ataque %i: ", i + 1);
		scanf("%i", &ataques[i]);

	}

	printf("\nO maior ataque registrado foi: %i\n", maiorNum(ataques));

	return 0;
}
