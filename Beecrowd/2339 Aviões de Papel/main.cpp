#include <iostream>

using namespace std;

int main(){
    int c, p, f, res;

    cin >> c >> p >> f;

    res = c * f;

    if(res <= p)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}