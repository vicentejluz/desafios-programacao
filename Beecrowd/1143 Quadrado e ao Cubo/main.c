#include <stdio.h>
 
int main() {
 
	int N, i, Quad, Cub;
	
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++){		
			Quad = pow(i, 2);
			Cub = pow(i, 3);
			printf("%d %d %d\n", i, Quad, Cub);
		
	}
 
    return 0;
}