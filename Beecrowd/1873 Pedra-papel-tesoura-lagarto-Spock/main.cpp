#include <iostream>

using namespace std;

int main(){
    int c;
    string jog1, jog2;

    cin >> c;

    while(c--){
        cin >> jog1 >> jog2;

        if((jog1 == "tesoura" and jog2 == "papel") or (jog1 == "tesoura" and jog2 == "lagarto") or 
            (jog1 == "papel" and jog2 == "pedra") or (jog1 == "papel" and jog2 == "spock") or
            (jog1 == "pedra" and jog2 == "lagarto") or (jog1 == "pedra" and jog2 == "tesoura") or
            (jog1 == "lagarto" and jog2 == "spock") or (jog1 == "lagarto" and jog2 == "papel") or
            (jog1 == "spock" and jog2 == "tesoura") or (jog1 == "spock" and jog2 == "pedra"))
                cout << "rajesh" << endl;
        else if((jog2 == "tesoura" and jog1 == "papel") or (jog2 == "tesoura" and jog1 == "lagarto") or 
            (jog2 == "papel" and jog1 == "pedra") or (jog2 == "papel" and jog1 == "spock") or
            (jog2 == "pedra" and jog1 == "lagarto") or (jog2 == "pedra" and jog1 == "tesoura") or
            (jog2 == "lagarto" and jog1 == "spock") or (jog2 == "lagarto" and jog1 == "papel") or
            (jog2 == "spock" and jog1 == "tesoura") or (jog2 == "spock" and jog1 == "pedra"))
                cout << "sheldon" << endl;
        else
            cout << "empate" << endl;
    }

    return 0;
}