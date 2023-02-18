#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    while(cin >> a >> b >> c){
        if(a == b and b == c) // (&& - and) (|| - or)
            cout << "*" << endl;
        else if(a != b and a != c)
            cout << "A" << endl;
        else if(b != c and b != a)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }

    return 0;
}