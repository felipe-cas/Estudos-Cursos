#include <stdio.h>
#include <string.h> // MANIPULAÇÃO DE STRINGS

/*

strlen() - TAMANHO DA STRING
strcpy() - COPIA UMA STRING
strcmp() - COMPARA STRINGS
strcat() - CONCATENA STRINGS

*/

int main() {
	char nome[] = "Felipe";
	char sobrenome[] = " Castro";

	strcat(nome, sobrenome);
	printf("NOME COMPLETO: %s\n", nome);
	printf("TAMANHO DA STRING: %i\n", strlen(nome));

	return 0;
}
