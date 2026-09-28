import java.util.Scanner;
import java.util.Arrays;


public class Vetores {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int num, pos, aux;
		int vet[] = new int[10];
		String strVetor = new String();

		while (true) {

			limpaTela();

			strVetor = mostraVetor(vet);

			System.out.println("--------------- VETORES ---------------");

			System.out.println("\nVETOR:" + strVetor);

			System.out.println("\nMenu: [1] ADICIONAR\n      [2] REMOVER\n      [3] ORDENAR");
			System.out.print("\nOpção: ");
			aux = input.nextInt();

			System.out.println("- - - - - - - - - - - - - - - - - - - -");

			switch (aux) {

				case 1:
					do {
						System.out.print("\nNUMERO:");
						num = input.nextInt();

						System.out.print("POSIÇÃO: ");
						pos = input.nextInt();

						if (pos < 0 || pos >= vet.length) System.out.println("Posição invalida!");
					} while (pos < 0 || pos >= vet.length);

					vet[pos] = num;
					break;

				case 2:
					do {
						System.out.print("\nPOSIÇÃO: ");
						pos = input.nextInt();

						if (pos < 0 || pos >= vet.length) System.out.println("Posição invalida!");

					} while (pos < 0|| pos >= vet.length);

					vet[pos] = 0;
					break;

				case 3:
					Arrays.sort(vet);
					break;

				case 0:
					break;

				default:
					System.out.println("O Valor digitado é Invalido!");

			}

			if (aux == 0) break;

		}
	}


	public static void limpaTela() {
		System.out.print("\033[H\033[2J");
		System.out.flush();

	}


	public static String mostraVetor(int vetor[]) {

		String strVetor = new String();

		for (int v : vetor) {
			strVetor += " [" + v + "] ";
		}

		return strVetor;

	}




}
