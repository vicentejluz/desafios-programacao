#include <stdio.h>
 
int main() {
 
	double A, B, media;
	
	do{
		scanf("%lf", &A);
		if(A < 0.0 || A > 10.0)
			printf("nota invalida\n");
	}while(A < 0 || A > 10);
	
	do{
		scanf("%lf", &B);
		if(B < 0.0 || B > 10.0)
			printf("nota invalida\n");
	}while(B < 0 || B > 10);

	media = (A + B) / 2;
	
	printf("media = %.2lf\n", media);
 
    return 0;
}