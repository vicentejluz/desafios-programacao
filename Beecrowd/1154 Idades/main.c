#include <stdio.h>
 
int main() {
 
    int X, cont = 0;
	double media = 0;
	
	do{
	
	scanf("%d", &X);
	
	if(X >= 0){
		media += X;
		cont++;
	}	
	
	}while(X >= 0);
	
	media /= cont;
	
	printf("%.2lf\n", media);
 
    return 0;
}