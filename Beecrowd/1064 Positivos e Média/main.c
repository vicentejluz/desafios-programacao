#include <stdio.h>
 
int main() {
 
	int i, pos = 0;
	double valores, media = 0;
	
	for(i = 0; i < 6; i++){
		scanf("%lf", &valores);
		
		if(valores > 0){
		pos++;
		media += valores;
		}
	}
	media /= pos;

	printf("%d valores positivos\n%.1lf\n", pos, media); 
 
    return 0;
}