import java.util.Scanner;
import java.time.LocalDate;

public class VerificadorIdade {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int ano_nasc, idade;
		int ano = LocalDate.now().getYear();


		System.out.print("Digite seu ano de nascimento: ");
		ano_nasc = input.nextInt();

		idade = ano - ano_nasc;
		String sit = (idade >= 18) ? "maior":"menor";
		String voto = ((idade >= 16 && idade < 18) || idade > 70) ? "OPCIONAL":"OBRIGATÓRIO";

		System.out.printf("Você tem %d anos de idade!\n", idade);
		System.out.printf("Você é %s de idade!\n", sit);
		System.out.printf("Seu voto é: %s\n", voto);




	}

}
