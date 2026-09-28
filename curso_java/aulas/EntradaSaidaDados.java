import java.util.Scanner;

public class EntradaSaidaDados {

	public static void main(String[] args) {
		// Criando objeto que faráa leitura
		Scanner input = new Scanner(System.in);

		System.out.print("Digite seu nome: ");
		String nome = input.nextLine(); // Método do objeto que fará a leitura

		System.out.println("Olá, " + nome + "!");

	}

}
