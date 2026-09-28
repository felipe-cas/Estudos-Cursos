public class TiposPrimitivos {

	public static void main(String[] args) {
		//Tipos Primitivos

		// INTEIRO
		int idade1 	= 3;		// Forma mais facil
		int idade2 	= (int) 3;	// Forma mais tipada(typecast)
		Integer idade3 	= 3;		// Atribuição como objeto


		// FLOAT
		float sal1 = 1825.4f;
		float sal2 = (float) 1825.4;
		Float sal3 = 1825.4f;


		// CHAR
		char letra1 	  = 'G';
		char letra2 	  = (char) 'G';
		Character letra3  = 'G';


		// BOOLEAN
		boolean casado1 = false;
		boolean casado2 = (boolean) false;
		Boolean casado3 = false;



		// SAIDA DE DADOS

		float nota = (float) 8.5;

		System.out.println("A nota é " + nota);		// Mostra na tela (Com pular linha)
		System.out.print("A nota é " + nota);		// Mostra na tela (Sem pular linha)
		System.out.printf("\nA nota é %.2f \n", nota);	// Print formatado

	}

}
