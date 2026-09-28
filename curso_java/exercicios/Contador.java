import java.util.Scanner;


public class Contador {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int inicio, fim, passo;

		System.out.println("--------------- CONTADOR --------------");
		System.out.print("INICIO: ");
		inicio = input.nextInt();

		System.out.print("FIM: ");
		fim = input.nextInt();

		System.out.print("PASSO: ");
		passo = input.nextInt();


		for (; inicio <= fim; inicio+=passo) {
			System.out.print(inicio);

			if (inicio != fim) System.out.print(" -> ");

		}

		System.out.println();

	}

}
