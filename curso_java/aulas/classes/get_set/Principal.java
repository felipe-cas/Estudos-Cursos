package get_set;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		met_get_set banda1 = new met_get_set();
		String nome;

		System.out.print("Nome da Banda: ");
		nome = input.nextLine();

		banda1.setBanda(nome);

		System.out.println("A banda definida foi: " + banda1.getBanda());
		banda1.mostraBanda();

	}

}
