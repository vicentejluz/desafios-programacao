#include <iostream>
 
using namespace std;
 
int main() {
    int n, c, m;

    cin >> n >> c >> m;

    int fc[c], fb[m];
    int cont = c;

    for (int i = 0; i < c; i++) {
        cin >> fc[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> fb[i]; 
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < m; j++) {
            if (fb[j] == fc[i]) {
                cont--;
                break;
            }
        }
    }

    cout << cont << endl;

    return 0;
}