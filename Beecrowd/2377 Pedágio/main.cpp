#include <iostream>

using namespace std;

int main(){
    int l, d, k, p, res;

    cin >> l >> d;
    cin >> k >> p;

    res = ((l / d) * p) + (l * k);

    cout << res << endl;

    return 0;
}