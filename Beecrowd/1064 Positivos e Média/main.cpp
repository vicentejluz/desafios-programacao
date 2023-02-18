#include <iostream>
 
using namespace std;
 
int main() {
 
	int i, pos = 0;
	double valores, media = 0;
	
	for(i = 0; i < 6; i++){
		
		cin >> valores;
		
		if(valores > 0){
		pos++;
		media += valores;
		}
	}
	media /= pos;

	cout << pos << " valores positivos" << endl;
	cout << fixed;
	cout.precision(1);
	cout << media << endl;
 
    return 0;
}