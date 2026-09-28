import java.util.Random;
import java.util.Scanner;

public class AdivinhaNumero {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random gerador = new Random();

		int resposta = gerador.nextInt(5) + 1;

		System.out.println("--------------- JOGO DE ADIVINHA ---------------\n");
		System.out.print("Tente adivinhar o numero que estou pensando(1-5): ");

		int palpite = input.nextInt();

		String resultado = (resposta == palpite) ? "Parabens, você acertou!":"Que pena, eu pensei no numero " + resposta;

		System.out.println(resultado);
	}

}
