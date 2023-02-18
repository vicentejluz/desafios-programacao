#include <iostream>

using namespace std;

int main(){
    int b, g, res;

    cin >> b >> g;

    res = (g / 2) - b;

    if(res <= 0)
        cout << "Amelia tem todas bolinhas!" << endl;
    else{
        cout << "Faltam " << res << " bolinha(s)" << endl;
    }

    return 0;
}