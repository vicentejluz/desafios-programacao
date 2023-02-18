#include <stdio.h>
 
int main() {
 
    int N, F = 1,i;
    
    scanf("%d", &N);
    
    for(i = N; i >= 1; i--)
        F *= i;
    
	printf ("%d\n", F);
 
    return 0;
}