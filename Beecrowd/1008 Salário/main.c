#include <stdio.h>
 
int main() {
 
	int NUMBER, valor;
	float a, SALARY;
	
	scanf("%d %d", &NUMBER, &valor);
	scanf("%f", &a);
	
	SALARY = valor * a;
	
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2f\n", SALARY);
 
    return 0;
}