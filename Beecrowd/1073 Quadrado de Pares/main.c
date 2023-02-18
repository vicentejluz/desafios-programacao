#include <stdio.h>
 
int main() {
 
	int i, N, X;
	
	do{

	scanf("%d", &N);
	}while(N < 5 || N > 2000);
	
	for(i = 1; i <= N; i++){
		if(i % 2 == 0){
			X = pow(i, 2);
			printf("%d^2 = %d\n",i, X);	
		}
	}
 
    return 0;
}