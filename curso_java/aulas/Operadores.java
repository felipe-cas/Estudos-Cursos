public class Operadores {

	public static void main(String[] args) {
		int a = 4, b = 2, res;

		// OPERADORES ARITIMÉTICOS

		System.out.println("\nOPERADORES ARITIMETICOS:");

		res = a + b;
		System.out.printf("Operador + (%d + %d) = %d\n", a, b, res);

                res = a - b;
                System.out.printf("Operador - (%d - %d) = %d\n", a, b, res);

                res = a * b;
                System.out.printf("Operador * (%d * %d) = %d\n", a, b, res);

                res = a / b;
                System.out.printf("Operador / (%d / %d) = %d\n", a, b, res);

                res = a % b;
                System.out.printf("Operador %% (%d %% %d) = %d\n", a, b, res);



		// OPERADORES DE ATRIBUIÇÃO

		System.out.println("\nOPERADORES DE ATRIBUIÇÃO:");

                res = a + 2;
                System.out.printf("Operador += (%d += 2) = %d\n", a, res);

                res = a - 2;
                System.out.printf("Operador -= (%d -= 2) = %d\n", a, res);

                res = a * 2;
                System.out.printf("Operador *= (%d *= 2) = %d\n", a, res);

                res = a / 2;
                System.out.printf("Operador /= (%d /= 2) = %d\n", a, res);

                res = a % 2;
                System.out.printf("Operador %%= (%d %%= 2) = %d\n", a, res);


                // OPRERADORES  UNARIOS

                System.out.println("\nOPERADORES UNARIOS:");

		res = a;
		a++;
		System.out.printf("Operador ++ (%d++) = %d\n", res, a);

		a = res;
		a--;
		System.out.printf("Operador -- (%d--) = %d\n", res, a);


	}

}
