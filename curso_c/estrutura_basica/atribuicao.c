#include <stdio.h>

int main() {
	char letra = 'F';
	char nome[7] = "Felipe";
	int idade = 22;
	float pi1 = 3.1415;
	double pi2 = 3.14159265359;
	_Bool ligado = 1;

	//MOSTRANDO VARIAVEL TIPO CHAR (UNICO CARACTER)
	printf("VARIAVEL TIPO CHAR (UNICO CARACTER): %c \n", letra);

	//MOSTRANDO VARIAVEL TIPO CHAR (CADEIA DE CARACTERES)
	printf("VARIAVEL TIPO CHAR (CADEIA): %s \n", nome);

	//MOSTRANDO VARIAVEL TIPO INT
	printf("VARIAVEL TIPO INT: %i \n", idade);

	//MOSTRANDO VARIAVEL TIPO FLOAT
	printf("VARIAVEL TIPO FLOAT: %.2f \n", pi1);

	//MOSTRANDO VARIAVEL TIPO DOUBLE
	printf("VARIAVEL TIPO DOUBLE: %.11f \n", pi2);

	//MOSTRANDO VARIAVEL TIPO BOOL
	printf("VARIAVEL TIPO BOOL: %i \n", ligado);


	return 0;
}
