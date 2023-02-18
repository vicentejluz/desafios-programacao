#include <stdio.h>
 
int main() {
 
	int X, i, Par = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &X);
		if(X % 2 == 0)
			Par++;
	}
	
	printf("%d valores pares\n", Par);
 
    return 0;
}