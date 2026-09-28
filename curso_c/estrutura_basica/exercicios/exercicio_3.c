#include <stdio.h>

int main() {
	int minutos, horas;

	printf("\nDIGITE QUANTOS MINUTOS DUROU A PARTIDA: ");
	scanf("%i", &minutos);

	horas = minutos / 60;
	minutos = minutos % 60;

	printf("-----CONVERSÃO-----\n");
	printf("A PARTIDA DUROU %iH:%iM\n", horas, minutos);

	return 0;
}
