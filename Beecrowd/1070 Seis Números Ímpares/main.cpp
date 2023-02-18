#include <iostream>
 
using namespace std;
 
int main() {
 
    int X, a, b;
    
	cin >> X;
    
    if(X % 2 == 0){
        for(a = X + 1; a <= X + 11; a = a + 2)
            cout << a << endl;;
    }
    else{
        for(b = X; b <= X + 10; b = b + 2)
            cout << b << endl;
    }
 
    return 0;
}