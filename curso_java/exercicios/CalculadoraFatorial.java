import java.util.Scanner;

public class CalculadoraFatorial {

	public static void main(String[] args) {
	Scanner input = new Scanner(System.in);

	System.out.println("--------------- CALCULADORA DE FATORIAL ---------------");
	System.out.print("\nDigite um numero: ");
	int num = input.nextInt();
	long resultado = 1;

	System.out.print("RESULTADO: ");

	while (num > 0) {
		System.out.print(num + " ");
		resultado *= num;

		if (num != 1) {
			System.out.print("x ");
		}

		num--;
	}

	System.out.println("= " + resultado);

	}

}
