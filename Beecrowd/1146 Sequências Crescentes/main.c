#include <stdio.h>
 
int main() {
 
	int X, i;
	
	do {
		scanf("%d", &X);
	
	for(i = 1; i < X; i++)
		printf("%d ", i);
	if(X != 0)
	    printf("%d\n", X);
	} while(X != 0);
 
    return 0;
}