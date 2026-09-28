import java.util.Scanner;

public class EquacaoSegGrau {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.println("AX² + BX + C = 0\n");

		System.out.print("Valor A = ");
		int numA = input.nextInt();

		if (numA == 0) {
			System.out.println("Para uma equação de segundo Grau, A deve ser diferente de 0!");
			System.exit(0);

		}

		System.out.print("Valor B = ");
		int numB = input.nextInt();

		System.out.print("Valor C = ");
		int numC = input.nextInt();


		// Calculo de Delta
		int delta = (numB * numB) - (4 * numA * numC);
		System.out.printf("Delta = %d\n\n", delta);


		// Calculando X
		if (delta >= 0) {
			double numX1, numX2;

			numX1 = ((-1 * numB) + Math.sqrt(delta)) / (numA * 2);
			numX2 = ((-1 * numB) - Math.sqrt(delta)) / (numA * 2);

			System.out.println("A Equação possui Raizes Reais");
			System.out.printf("X¹ = %.2f		X² = %.2f\n", numX1, numX2);

		} else {
			System.out.println("A Equação não possui Raizes Reais");

		}


	}

}
