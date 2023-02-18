#include <stdio.h>
 
int main() {
 
	int codigop1, codigop2, qtd1, qtd2;
	float valor1, valor2, total;
	
	scanf("%d %d", &codigop1, &qtd1);
	scanf("%f", &valor1);
	
	scanf("%d %d", &codigop2, &qtd2);
	scanf("%f", &valor2);
	
	total = (qtd1 * valor1) + (qtd2 * valor2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}