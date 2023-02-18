#include <stdio.h>
 
int main() {
 
	double X, imposto;
	
	scanf("%lf", &X);
	
	if(X >= 0.0 && X <= 2000.0)
		printf("Isento\n");
	else if(X <= 3000.0){
		imposto = (X - 2000) * 0.08;
		printf("R$ %.2lf\n", imposto);
	}
	else if(X <= 4500.0){
		imposto = (X - 3000) * 0.18 + 80;
		printf("R$ %.2lf\n", imposto);
	}
	else{
		imposto = (X - 4500) * 0.28 + 350;
		printf("R$ %.2lf\n", imposto);
	}
 
    return 0;
}