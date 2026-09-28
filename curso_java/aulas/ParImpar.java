import java.util.Scanner;


public class ParImpar {

	public static void main (String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Digite um numero: ");
		int num = input.nextInt();

		if (num % 2 == 0) {
			System.out.printf("Numero %d é PAR\n", num);

		} else {
			System.out.printf("Numero %d é IMPAR\n", num);

		}

	}

}
