#include <iostream>
 
using namespace std;

int main() {
    int t, n, k, div, mut, sub, som;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;

        if (k > n) {
            cout << n << endl;
        }
        else {
            div = n / k;
            mut = div * k;
            sub = n - mut;
            som = div + sub;
            cout << som << endl;
        }
    }

    return 0;
}