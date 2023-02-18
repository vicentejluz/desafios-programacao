#include <iostream>

using namespace std;

int main(){
    int q, sas, cont = 0, cont2 = 0;

    cin >> q;

    while(q--){
        cin >> sas;

        if(sas == 1)
            cont++;
        else
            cont2++;
    }

    if(cont >= cont2)
        cout << "N" << endl;
    else
        cout << "Y" << endl;

    return 0; 
}