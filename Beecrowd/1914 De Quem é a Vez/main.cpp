#include <iostream>

using namespace std;

int main(){
    int qt, n, m, res;
    string jog1[2], jog2[2], escolha;

    cin >> qt;

    while(qt--){
        cin >> jog1[0] >> jog1[1] >> jog2[0] >> jog2[1];
        cin >> n >> m;

        res = n + m;

        if(res % 2 == 0)
            escolha = "PAR";
        else
            escolha = "IMPAR";

        if(escolha == jog1[1])
            cout << jog1[0] << endl;
        else
            cout << jog2[0] << endl;
    }

    return 0;
}