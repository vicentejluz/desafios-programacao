#include <stdio.h>
 
int main() {
 
	int X, Y, T;
	
	scanf("%d %d", &X, &Y);
	
	if(X == Y)
		printf("O JOGO DUROU 24 HORA(S)\n");
	
	if(X > Y){
		T = 24 - X + Y;
		printf("O JOGO DUROU %d HORA(S)\n", T);
	}
	
	if(X < Y){
		T = Y - X;
		printf("O JOGO DUROU %d HORA(S)\n", T);
	}
 
    return 0;
}