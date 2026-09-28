public class ClassMath {

	public static void main(String[] args) {
		float Num1 = 4.2f, Num2 = 4.8f;
		int Num3 = -10, ar;

		System.out.println("Conhecendo a classe Math");
		System.out.printf("Num1 = 4.2\nNum2 = 4.8\nNum3 = -10\n\n");

		ar = (int) Math.ceil(Num1);
		System.out.printf("Math.ceil(Num1)  = %d\n", ar);

		ar = (int) Math.floor(Num2);
		System.out.printf("Math.floor(Num2) = %d\n", ar);

		ar = (int) Math.round(Num1);
		System.out.printf("Math.round(Num1) = %d\n", ar);

		ar = (int) Math.round(Num2);
		System.out.printf("Math.round(Num2) = %d\n", ar);

		ar = Math.abs(Num3);
		System.out.printf("Math.abs(Num3)   = %d\n\n\n", ar);


		System.out.printf("Math.PI 	  = %f\n", Math.PI);

		System.out.printf("Math.pow(5, 2) = %d\n", (int) Math.pow(5, 2));

		System.out.printf("Math.sqrt(25)  = %d\n", (int) Math.sqrt(25));

		System.out.printf("Math.cbrt(27)  = %d\n", (int) Math.cbrt(27) );



	}

}
