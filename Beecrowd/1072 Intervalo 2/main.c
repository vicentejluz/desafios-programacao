#include <stdio.h>
 
int main() {
 
	int N, X, i, in = 0, out = 0;
	
	do{
		scanf("%d", & N);
	}while(N > 10000);

	for(i = 0; i < N; i++){
		scanf("%d", &X);
		
		if(X >= 10 && X <= 20){
			in++;
		}else{
			out++;
		}		
	}
	
	printf("%d in\n%d out\n", in, out);
 
    return 0;
}