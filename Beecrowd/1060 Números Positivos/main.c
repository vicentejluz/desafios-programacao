#include <stdio.h>
 
int main() {
 
	int i, pos = 0;
	double valores;
	
	for(i = 0; i < 6; i++){
		scanf("%lf", &valores);
		
		if(valores > 0){
		    pos++;
		}
	}

	printf("%d valores positivos\n", pos);
 
    return 0;
}