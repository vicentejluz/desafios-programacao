#include <iostream>

using namespace std;

int main() {
    string palav;

    cin >> palav;

    if (palav.size() >= 10)
        cout << "palavrao" << endl;
    else
        cout << "palavrinha" << endl;

    return 0;
}