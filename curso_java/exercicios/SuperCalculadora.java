import java.util.Scanner;

public class SuperCalculadora {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int resto, cubo, abs;
		double sqrt, cbrt;

		System.out.print("Digite um numero inteiro: ");
		int num = input.nextInt();

		resto = num % 2;
		cubo  = (int) 	 Math.pow(num, 3);
		abs   = (int) 	 Math.abs(num);
		sqrt  = (double) Math.sqrt(num);
		cbrt  = (double) Math.cbrt(num);

		System.out.print("\n\n");


		System.out.printf("RESTO DA DIVISÃO POR 2	%d\n"  , resto);
		System.out.printf("ELEVADO AO CUBO		%d\n"  , cubo);
		System.out.printf("RAIZ QUADRADA		%.2f\n", sqrt);
		System.out.printf("RAIZ CUBICA		%.2f\n", cbrt);
		System.out.printf("VALOR ABSOLUTO		%d\n"  , abs);


	}

}
