// long long int para usar int 32 bits

#include <iostream>

using namespace std;

int main(){
    long long int num1, num2;

    while(cin >> num1 >> num2){
        cout << (num1 ^ num2) << endl;
    }

    return 0;
}