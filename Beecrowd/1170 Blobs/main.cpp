#include <iostream>

using namespace std;

int main() {
    int N, i, cont = 0;
    double C, div;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> C;
        div = C / 2;
        if (div >= 1)
            cont = 1;
        while (div > 1) {
            div /= 2;
            cont++;
        }
        cout << cont << " dias" << endl;
    }

    return 0;
}