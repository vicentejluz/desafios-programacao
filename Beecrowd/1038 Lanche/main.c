#include <stdio.h>
 
int main() {
 
	int cod, qtd;
	float valor;
	
	scanf("%d %d", &cod, &qtd);
	
	if(cod == 1){
		valor = qtd * 4.00;
	}else if(cod == 2){
		valor = qtd * 4.50;
	}else if(cod == 3){
		valor = qtd * 5.00;
	}else if(cod == 4){
		valor = qtd * 2.00;
	}else if(cod == 5){
		valor = qtd * 1.50;
	}
	
	printf("Total: R$ %.2f\n", valor);
 
    return 0;
}