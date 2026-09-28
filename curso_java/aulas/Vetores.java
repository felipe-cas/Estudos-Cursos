public class Vetores {

	public static void main(String[] args) {
		String 	mes[] 	= {"Jan", "Fev", "Mar", "Mai", "Abr", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
		int 	dias[]	= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		for (int i = 0; i < mes.length; i++) {
		System.out.printf("O mês de %s tem %d dias!\n", mes[i], dias[i]);

		}


		int num[] = {3, 5, 1, 8, 4};

		for (int v: num) {
			System.out.print(v + " ");
		}
		System.out.println();

	}

}
