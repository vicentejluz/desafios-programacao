#include <iostream>
 
using namespace std;
 
int main() {
 
    double a, b = 1, c, S = 0;
    
    for(a = 1; a <= 100; a++){
        c= 1 / a;
        S += c;
    }
    
	cout << fixed;
	cout.precision(2);
    cout << S << endl;
    
 
    return 0;
}