#include <stdio.h>
 
int main() {
 
	int cont, N;
	
	do{
	scanf("%d", &N);
	}while(N < 2 || N > 1000);
		for(cont = 1; cont <= 10; cont++){
			printf("%d x %d = %d\n", cont, N, cont * N);
		}
 
    return 0;
}