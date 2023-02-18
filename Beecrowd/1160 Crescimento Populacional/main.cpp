#include <iostream>
 
using namespace std;
 
int main() {
 
int T, j, PA, PB, i;
    double G1, G2;
    
    cin >> T;
    
    for(i = 1; i <= T; i++){
    	j = 0;
    	cin >> PA;
    	cin >> PB;

		cin >> G1;
		cin >> G2;
        
		while(PA <= PB){
            PA *= (G1 / 100.0) + 1.0;
            PB *= (G2 / 100.0) + 1.0;
            j++;
            
			if (j > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (j <= 100)
            cout << j << " anos." << endl;
	}
 
    return 0;
}