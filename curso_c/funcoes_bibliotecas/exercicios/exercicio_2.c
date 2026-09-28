#include <stdio.h>

int contaVogais(char palavra[]) {
	int count = 0;

	for (int i = 0; palavra[i] != '\0'; ++i) {
		switch (palavra[i]) {

			case 'a':
				count++;
				break;

                	case 'e':
                        	count++;
				break;

	                case 'i':
        	                count++;
				break;

	                case 'o':
        	                count++;
				break;

                	case 'u':
                        	count++;
				break;
		}
	}

	return count;

}


int main () {
	char palavra[20];
	int vogais;

	printf("DIGITE UMA PALAVRA ALEATÓRIA: ");
	scanf("%s", palavra);

	vogais = contaVogais(palavra);

	printf("EXISTEM %i VOGAIS NA PALAVRA: %s\n", vogais, palavra);

	return 0;
}
