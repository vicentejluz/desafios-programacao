#include <stdio.h>
 
int main() {
 
	int X, maior = 0, i, cont = 0;
	
	for(i = 1; i <= 100; i++){
		scanf("%d", &X);
		if (i == 0) {
      		maior = X;
    	}
		else {
			if (X > maior) {
				maior = X;
				cont = i;
			}
		}
	}
	printf("%d\n", maior);
	printf("%d\n", cont);
 
    return 0;
}