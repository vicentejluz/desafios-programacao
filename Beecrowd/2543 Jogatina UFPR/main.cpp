#include <iostream>
 
using namespace std;

int main() {
    int n, u, i, j, cont;

    while(cin >> n >> u) {
        cont = 0;
        for(int k = 0; k < n; k++){
            cin >> i >> j;
            if(i == u && j == 0){
                cont++;
            }
        }

        cout << cont << endl;
    }


    return 0;
}