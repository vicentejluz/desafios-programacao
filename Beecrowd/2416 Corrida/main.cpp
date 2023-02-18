#include <iostream>

using namespace std;

int main() {
    int c, n, div, mut, menos;

    cin >> c >> n;

    div = c / n;
    mut = div * n;
    menos = c - mut;

    cout << menos << endl;

    return 0;
}