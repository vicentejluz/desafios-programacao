#include <iostream>
 
using namespace std;
 
int main() {
 
	int i, pos = 0;
	double valores;
	
	for(i = 0; i < 6; i++){
		cin >> valores;
		
		if(valores > 0){
		    pos++;
		}
	}

	cout << pos <<" valores positivos" << endl; 
 
    return 0;
}