#include <iostream>

using namespace std;

int main(){
    int n;
    string jog1, jog2;

    cin >> n;

    while(n--){
        cin >> jog1;
        cin >> jog2;
        
        if((jog1 == "ataque") and (jog2 == "pedra") or (jog1 == "pedra") and (jog2 == "papel") or (jog1 == "ataque") and (jog2 == "papel"))
            cout << "Jogador 1 venceu" << endl;
        else if((jog2 == "ataque") and (jog1 == "pedra") or (jog2 == "pedra") and (jog1 == "papel") or (jog1 == "papel") and (jog2 == "ataque"))
            cout << "Jogador 2 venceu" << endl;
        else if((jog1 == "papel") and (jog2 == "papel"))
            cout << "Ambos venceram" << endl;
        else if((jog1 == "pedra") and (jog2 == "pedra"))
            cout << "Sem ganhador" << endl;
        else
            cout << "Aniquilacao mutua" << endl;
    }

    return 0;
}