#include <stdio.h>

float media(float n1, float n2) {
	return (n1 + n2) / 2;
}


int main() {
	float nota1, nota2;

	printf("DIGITE A PRIMEIRA NOTA: ");
	scanf("%f", &nota1);

	printf("DIGITE A SEGUNDA NOTA: ");
	scanf("%f", &nota2);

	printf("\nA MEDIA DOS DOIS NUMEROS É: %.2f\n", media(nota1, nota2));

	return 0;
}
