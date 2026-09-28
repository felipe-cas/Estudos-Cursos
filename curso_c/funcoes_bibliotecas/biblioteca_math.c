#include <stdio.h>
#include <math.h> //FUNÇÕES MATEMATICAS

/*

- sqrt()          - RAIZ QUADRADA
- pow()           - POTÊNCIA
- abs() / fabs()  - VALOR ABSOLUTO
- sin(), cos(), tan() - TRIGONOMETRIA

*/

int main() {
	int base = 2, expo = 3;

	printf("2 ELEVADO A 3: %.2f\n", pow(base, expo));
	printf("RAIZ QUADRADA DE 25: %.2f\n", sqrt(25));

	return 0;
}
