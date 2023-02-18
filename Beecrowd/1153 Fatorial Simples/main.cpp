#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, F = 1, i;
    
    cin >> N;
    
    for(i = N; i >= 1; i--)
        F *= i;
    
	cout << F << endl;
 
    return 0;
}