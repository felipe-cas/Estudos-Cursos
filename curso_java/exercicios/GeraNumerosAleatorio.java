import java.util.Random;
import java.util.Scanner;

public class GeraNumerosAleatorio {

	public static void main(String[] args) {

		// Declaração de Variaveis e Objetos
		Random gerador 	= new Random();
		Scanner input 	= new Scanner(System.in);

		int interMenor, interMaior, intervalo;


		// Entrada de Dados (Definindo Intervalo)
		System.out.printf("Escolha o Intervalo X (X - Y): ");
		interMenor = input.nextInt();

		System.out.printf("Escolha o Intervalo Y (%d - Y): ", interMenor);
		interMaior = input.nextInt();


		// Gerando Numero Aleatório
		intervalo = interMaior - interMenor;
		int valor = gerador.nextInt(intervalo) + interMenor;


		// Mostrando Numero Gerado
		System.out.print("\n------------------------------\n");
		System.out.printf("Intervalo Definido: (%d - %d)\n", interMenor, interMaior);
		System.out.printf("Numero Gerado: %d\n\n", valor);

	}

}
