#include <stdio.h>
 
int main() {
 
	int N, i;
	double n1, n2, n3, media;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++){
		scanf("%lf %lf %lf", &n1, &n2, &n3);
		media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);
		printf("%.1lf\n", media);
	}
 
    return 0;
}