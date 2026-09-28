import java.util.Scanner;

public class CalculaAreaConstantes {

	// DECLARAÇÃO DE CONSTANTES
	public static final double LARGURA = 10.0;


	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		double comp, area;

		System.out.println("---------------------- CALCULA AREA ----------------------");
		System.out.println("Digite o Comprimento:             (LARGURA PADRÃO: 10.0M)");

		comp = input.nextDouble();
		area = calculaArea(LARGURA, comp);

		System.out.printf("\nA Area calculada é %.2f M\n", area);

	}

	public static double calculaArea(double largura, double comprimento) {
		return largura * comprimento;

	}

}
