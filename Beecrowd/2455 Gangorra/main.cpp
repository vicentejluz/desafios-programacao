#include <iostream>

using namespace std;

int main(){
    int P1, C1, P2, C2 , esq, dir;

    cin >> P1 >> C1 >> P2 >> C2;

    esq = P1 * C1;
    dir = P2 * C2;

    if(esq == dir)
        cout << "0" << endl;
    else if(esq > dir)
        cout << "-1" << endl;
    else
        cout << "1" << endl;

    return 0;
}