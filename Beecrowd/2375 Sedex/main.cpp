#include <iostream>

using namespace std;

int main(){
    int n, a, l, p;

    cin >> n;
    cin >> a >> l >> p;

    if(n > a or n > l or n > p)
        cout << "N" << endl;
    else
        cout << "S" << endl;

    return 0;
}