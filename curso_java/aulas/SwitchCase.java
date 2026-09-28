import java.util.Scanner;

public class SwitchCase {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Digite quantas pernas voce possui: ");
		int pernas = input.nextInt();

		switch (pernas) {
			case 1:
				System.out.println("Você provavelmente é um Saci!");
				break;

			case 2:
				System.out.println("Você concerteza é um bipede!");
				break;

			case 4:
				System.out.println("Você concerteza é um Quadrupede!");
				break;

			case 6, 8:
				System.out.println("Você provavelmente é um inseto!");
				break;

			default:
				System.out.println("Você concerteza é um ET!");


		}

	}

}
