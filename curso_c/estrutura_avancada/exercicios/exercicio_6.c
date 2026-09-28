#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX 10

char fila[MAX][20];
int posx = -1;


void enqueue(char nome[]) {
	if (posx + 1 == MAX) {
		printf("ERRO: FILA CHEIA!\n");
		return;
	}

	//posx++;
	strcpy(fila[++posx], nome);
}


void dequeue() {
	if (posx == -1) {
		printf("ERRO: FILA VAZIA!\n");
		return;
	}

	for (int i = 0; i <= posx; i++) {
		strcpy(fila[i], fila[i+1]);
	}

	posx--;
}


void mostraFila() {
	for (int i = 0; i <= posx; i++) {
		printf("%s\n", fila[i]);
	}
}


char *mostraInicio() {
	if (posx == -1) {
		return "ERRO: FILA VAZIA!\n";
	} else {
		return fila[0];
	}
}


int main() {
        int opt = 0;

        do {
                printf("\n--------------- BANCO ---------------\n\n");
                printf("[1] Adicionar Cliente   [2] Atender Cliente\n");
                printf("[3] Mostrar Fila        [0] Sair\n");
                printf("Opção: ");
                scanf("%d", &opt);

                switch (opt) {
                        case 0:
                                break;

                        case 1:
                                char nome[20];
                                printf("\n-------------------------\n");
                                printf("Nome do Cliente: ");
				scanf("%s", nome);

                                enqueue(nome);
                                break;

                        case 2:
                                printf("\n-------------------------\n");
                                if (posx == -1) {
     	                           printf("Fila Vazia!\n");
                                } else {
                                        printf("Atendendo %s...\n", mostraInicio());
					dequeue();
                                }
                                sleep(2);
                                break;

                        case 3:
                                printf("\n-------------------------\n");
                                printf("Fila Atual:\n");
                                mostraFila();
                                sleep(2);
                                break;

                        default:
                                printf("\n-------------------------\n");
                                printf("Opção Invalida!");
                                sleep(2);
                }
		system("clear");

        } while (opt != 0);


	return 0;
}
