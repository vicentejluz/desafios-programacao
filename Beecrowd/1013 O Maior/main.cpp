#include <iostream>

using namespace std;

int main() {

    int a, b, c, MaiorAB;

    cin >> a;
    cin >> b;
    cin >> c;

    MaiorAB = (a + b + abs(a - b)) / 2;
    MaiorAB = (MaiorAB + c + abs(MaiorAB - c)) / 2;

    cout << MaiorAB << " eh o maior" << endl;

    return 0;
}