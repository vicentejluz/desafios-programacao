#include <stdio.h>

int main(){
	int N, X, Y, i;
	double D;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%d %d", &X, &Y);
		if(Y == 0)
			printf("divisao impossivel\n");
		else{
			D = (double) X / Y;
			printf("%.1lf\n", D);
		}
	}
	
	return 0;
}