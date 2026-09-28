#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int numAleatorio(int unsigned *seed) {
	return rand_r(seed) % 60;
}


int main() {
	int unsigned seed = time(NULL);

	printf("================= MEGA SENA DA VIRADA =================\n");
	printf("             OS NUMEROS SORTEADOS FORAM...\n\n");

	printf("              ");
	fflush(stdout);
	sleep(2);

	for (int i = 0; i < 6; ++i) {
		printf("%i   ", numAleatorio(&seed));
		fflush(stdout);
		usleep(1500000);

	}

	printf("\n");

	return 0;
}
