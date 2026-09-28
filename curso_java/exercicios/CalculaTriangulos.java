import java.util.Scanner;

public class calculoTriangulo {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int ladoA, ladoB, ladoC;


		System.out.println("--------------- Tipos de Triangulos ---------------");
		System.out.println("Digite aS medidaS do Triangulo:\n");

		System.out.print("LADO A: ");
		ladoA = input.nextInt();

		System.out.print("LADO B: ");
		ladoB = input.nextInt();

		System.out.print("LADO C: ");
		ladoC = input.nextInt();

		boolean boolTriangulo = CalcTriangulo(ladoA, ladoB, ladoC);

		if (boolTriangulo) {
			String tipo = TipoTriangulo(ladoA, ladoB, ladoC);

			System.out.println("\nEssas medidas formam um Triangulo!");
			System.out.println("Tipo: " + tipo);

		} else {
			System.out.println("\nEssas medidas não formam um Triangulo!");

		}

	}


	public static boolean CalcTriangulo(int a, int b, int c) {
		if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
			return true;
		} else {
			return false;
		}

	}


	public static String TipoTriangulo(int a, int b, int c) {
		if (a == b && b == c) {
			return "EQUILÁTERO";
		} else if (a != b && b != c && a != c) {
			return "ESCALENO";
		} else {
			return "ISÓCELES";
		}

	}

}
