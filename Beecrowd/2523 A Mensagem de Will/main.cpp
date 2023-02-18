#include <iostream>

using namespace std;

int main(){
    int n;
    string std;

    while(cin >> std){
        cin >> n;

        int pos[n];

        for(int i = 0; i < n; i++)
            cin >> pos[i];

        for(int i = 0; i < n; i++)
            cout << std[pos[i] - 1];
        
        cout << endl;
    }

    return 0;
}