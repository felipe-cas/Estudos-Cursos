#include <stdio.h>
#include <stdlib.h>

int converte_string(char s_num[]) {
	return atoi(s_num);

}


int main() {
	char idade[3];

	printf("QUAL A SUA IDADE: ");
	scanf(" %s", idade);

	if (converte_string(idade) >= 18) {
		printf("VOCÊ É MAIOR DE IDADE!\n");

	} else {
		printf("VOCÊ É MENOR DE IDADE!\n");

	}

	return 0;
}
