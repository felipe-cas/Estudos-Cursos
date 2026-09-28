import java.util.Scanner;

public class CalculadoraIdade {

	public static void main(String[] args) {
		// Declaração de variaveis
		int anoNascimento, idade;
		int data = java.time.LocalDate.now().getYear();

		// Criando Objeto Scanner para leitura de entrada de dados
		Scanner input = new Scanner(System.in);

		// Leitura do ano de Nascimento
		System.out.print("Digite seu ano de nascimento: ");
		anoNascimento = input.nextInt();

		// Calculando Idade Aproximada
		idade = data - anoNascimento;


		// Mostrando resultado do calculo
		System.out.printf("Sua idade é: %d", idade);

	}

}
