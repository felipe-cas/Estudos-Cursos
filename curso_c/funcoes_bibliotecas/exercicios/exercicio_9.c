#include <stdio.h>
#include <stdlib.h>

float converte_string (char s_num[]) {
	return atof(s_num);

}


int main () {
	char temp[8];

	printf("DIGITE A TEMPERATURA: ");
	scanf(" %s", temp);

	float temp_float = converte_string(temp);

	if (temp_float < 18) {
		printf("O AMBIENTE ESTA MUITO FRIO!\n");

	} else if (temp_float > 26) {
		printf("O AMBIENTE ESTA QUENTE!\n");

	} else {
		printf("O AMBIENTE ESTA AGRADAVEL!\n");

	}

	printf("TEMPERATURA: %.2f °C\n", temp_float);

	return 0;
}
