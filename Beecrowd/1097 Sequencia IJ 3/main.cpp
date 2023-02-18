#include <iostream>
 
using namespace std;
 
int main() {
 
 int I, J, a = 7, b;
    
    for(I = 1; I <= 9; I = I + 2){
        for(b = 1, J = a; b <= 3; J--, b++)
            cout << "I=" << I << " J=" << J << endl;
        a = a + 2;
    }
 
    return 0;
}