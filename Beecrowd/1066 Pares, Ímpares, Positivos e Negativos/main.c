#include <stdio.h>
 
int main() {
 
	int X, i, Pos = 0, Neg = 0, Imp = 0, Par = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &X);
		if(X < 0)
			Neg++;
		else if(X > 0)
			Pos++;
		if(X % 2 == 0)
			Par++;
		else
			Imp++;
	}
	
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", Par, Imp, Pos, Neg);
 
    return 0;
}