#include <stdio.h>
 
int main() {
 
	double X, Y;
	
	scanf("%lf %lf", &X, &Y);
	
	if(X == 0 && Y == 0)
		printf("Origem\n");
	else if(X == 0)
		printf("Eixo Y\n");
	else if(Y == 0)
		printf("Eixo X\n");	
	if(X < 0.0  && Y < 0.0)
		printf("Q3\n");
	else if(X < 0.0 && Y > 0.0)
		printf("Q2\n");
	else if(Y < 0.0 && X > 0.0)
		printf("Q4\n");
	else if(X > 0.0 && Y > 0.0)
		printf("Q1\n");
 
    return 0;
}