#include <stdio.h>
 
int main() {
 
    int T, j, PA, PB, i;
    double G1, G2;
    
	scanf("%d", &T);
    
    for(i = 1; i <= T; i++){
    	j = 0;
        scanf("%d %d", &PA, &PB);
        scanf("%lf %lf", &G1, &G2);
        
		while(PA <= PB){
            PA *= (G1 / 100.0) + 1.0;
            PB *= (G2 / 100.0) + 1.0;
            j++;
            
			if (j > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (j <= 100)
            printf("%d anos.\n", j);
	}
 
    return 0;
}