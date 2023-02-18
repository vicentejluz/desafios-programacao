#include <iostream>
 
using namespace std;
 
int main() {
 
	int hora_inicial, minuto_inicial, hora_final, minuto_final, hora_total, minuto_total;
	
	cin >> hora_inicial;
	cin >> minuto_inicial;
	cin >> hora_final;
	cin >> minuto_final;
	
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
    	cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else
    	cout << "O JOGO DUROU " << hora_total << " HORA(S) E " << minuto_total << " MINUTO(S)" << endl;
 
    return 0;
}