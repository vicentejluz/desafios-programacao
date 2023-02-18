#include <iostream>
 
using namespace std;

int main(){
    long double aux, S = 1;
    double aux2 = 1;
    int i;
    
    for(i = 3; i < 40; i++){
      if(i % 2 != 0){
        aux2 *= 2;
        aux = i / aux2;
        S += aux;
      }
    }
    cout << fixed;
    cout.precision(2);
    cout << S << endl;
    
	return 0;
}