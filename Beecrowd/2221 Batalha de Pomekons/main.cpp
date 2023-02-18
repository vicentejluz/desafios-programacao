#include <iostream>

using namespace std;

int main(){
    int t, b, atq1, def1, lvl1, res1, atq2, def2, lvl2, res2;

    cin >> t;

    while(t--){
        cin >> b;
        cin >> atq1 >> def1 >> lvl1;
        cin >> atq2 >> def2 >> lvl2;

        if(lvl1 % 2 == 0)
            res1 = ((atq1 + def1) / 2) + b;
        else
            res1 = (atq1 + def1) / 2;

        if(lvl2 % 2 == 0)
            res2 = ((atq2 + def2) / 2) + b;
        else
            res2 = (atq2 + def2) / 2;

        if(res1 == res2)
            cout << "Empate" << endl;
        else if(res1 > res2)
            cout << "Dabriel" << endl;
        else
            cout << "Guarte" << endl;
    }

    return 0;
}