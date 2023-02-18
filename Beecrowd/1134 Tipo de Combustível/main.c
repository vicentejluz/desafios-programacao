#include <stdio.h>
 
int main() {
 
	int X, i, al = 0, gas = 0, diesel = 0;
	
	do{
			scanf("%d", &X);
			
			if(X == 1)
				al++;
			if(X == 2)
				gas++;
			if(X == 3)
				diesel++;
				
	}while(X != 4);
		printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", al, gas, diesel);
 
    return 0;
}