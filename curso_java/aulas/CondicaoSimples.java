import java.util.Scanner;

public class CondicaoSimples {

	public static void main (String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Digite a primeira nota: ");
		float nota1 = input.nextFloat();

		System.out.print("Digite a segunda nota: ");
		float nota2 = input.nextFloat();

		float media = (nota1 + nota2) / 2;

		System.out.println("Sua média foi de " + media);

		if (media >= 9) {
			System.out.println("Parabens!");

		} else if (media >= 7) {
			System.out.println("Na média!");

		} else {
			System.out.println("Melhore!");

		}

	}

}
