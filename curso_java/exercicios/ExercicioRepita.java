import java.util.Scanner;

public class ExercicioRepita {

	public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	int num, contador=0, pares=0, impares=0, maior100=0, soma=0;
	float media;

	do {
		System.out.print("Digite um numero(0 Exit): ");
		num = input.nextInt();

		if (num == 0) continue;

		soma += num;
		contador++;

		if (num % 2 == 0) {
			pares++;

		} else if (num > 100) {
			maior100++;

		} else {
			impares++;

		}

	} while (num != 0);


	media = CalcMedia(soma, contador);

	System.out.println("\n---------- Resultado ----------");
	System.out.println("Total de Valores: ......... " + contador);
	System.out.println("Total de Pares: ........... " + pares);
	System.out.println("Total de Ímpares: ......... " + impares);
	System.out.println("Acima de 100: ............. " + maior100);
	System.out.printf("Média dos valores: ........ %.2f\n",media);

	}


	public static float CalcMedia(int soma, int quant) {
		return (float) soma / quant;

	}

}
