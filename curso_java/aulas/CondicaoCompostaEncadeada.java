import java.util.Scanner;
import java.time.LocalDate;

public class CondicaoCompastaEncadeada {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Digite seu ano de nascimento: ");
		int anoNasc = input.nextInt();

		int idade = LocalDate.now().getYear() - anoNasc;

		System.out.printf("Sua idade é de %d anos!\n", idade);

		if (idade < 16) {
			System.out.println("Você ainda não pode votar!");

		} else if (idade < 18 ||idade > 70) {
			System.out.println("Seu voto é opcional!");

		} else {
			System.out.println("Seu voto é obrigatório");

		}

	}

}
