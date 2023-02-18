#include <stdio.h>
 
int main() {
 
	int hora_inicial, minuto_inicial, hora_final, minuto_final, hora_total, minuto_total;
	
	scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
	
	hora_total = hora_final - hora_inicial;
	
	if (hora_total < 0)
    	hora_total += 24;
    
    minuto_total = minuto_final - minuto_inicial;
    
    if (minuto_total < 0) {
    	minuto_total += 60;
        if(hora_total != 0)
            hora_total -= 1;
        else
            hora_total = 23;
	}

	if (minuto_total == 0 && hora_total == 0)
    	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora_total, minuto_total);
 
    return 0;
}