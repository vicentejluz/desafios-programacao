#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, r;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> r;
        cout << "resposta " << i << ": " << r << endl; 
    }
 
    return 0;
}