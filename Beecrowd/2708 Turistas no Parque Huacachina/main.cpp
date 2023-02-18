#include <iostream>

using namespace std;

int main(){
    int t, saida = 0, volta = 0, contS = 0, contV = 0, res[2];
    string str;

    do{
        cin >> str >> t;

        if(str == "ABEND")
            break;
        
        if(str == "SALIDA"){
            saida += t;
            contS++;
        }
        else{
            volta += t;
            contV++;
        }

    }while(str != "ABEND");

    res[0] = saida - volta;
    res[1] = contS - contV;

    cout << res[0] << endl;
    cout << res[1] << endl;

    return 0;
}