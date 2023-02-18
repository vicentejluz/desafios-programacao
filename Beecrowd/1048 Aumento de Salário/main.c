#include <stdio.h>
 
int main() {
 
	double Sal, imposto;
	
	scanf("%lf", &Sal);
	
	if (Sal >= 0.0 && Sal <= 400.0) {
		imposto = Sal * 0.15;
		Sal = Sal + imposto;
		printf("Novo salario: %.2lf\n", Sal);
		printf("Reajuste ganho: %.2lf\n", imposto);
		printf("Em percentual: 15 %%\n");
	}
	else if (Sal <= 800.0) {
		imposto = Sal * 0.12;
		Sal = Sal + imposto;
		printf("Novo salario: %.2lf\n", Sal);
		printf("Reajuste ganho: %.2lf\n", imposto);
		printf("Em percentual: 12 %%\n");
	}
	else if (Sal <= 1200.0) {
		imposto = Sal * 0.10;
		Sal = Sal + imposto;
		printf("Novo salario: %.2lf\n", Sal);
		printf("Reajuste ganho: %.2lf\n", imposto);
		printf("Em percentual: 10 %%\n");
	}
	else if (Sal <= 2000.0) {
		imposto = Sal * 0.07;
		Sal = Sal + imposto;
		printf("Novo salario: %.2lf\n", Sal);
		printf("Reajuste ganho: %.2lf\n", imposto);
		printf("Em percentual: 7 %%\n");
	}
	else {
		imposto = Sal * 0.04;
		Sal = Sal + imposto;
		printf("Novo salario: %.2lf\n", Sal);
		printf("Reajuste ganho: %.2lf\n", imposto);
		printf("Em percentual: 4 %%\n");
	}
 
    return 0;
}