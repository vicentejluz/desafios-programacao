#include <iostream>

using namespace std;

int main(){
    int e, d;

    cin >> e >> d;

    if(e < (d - 2))
        cout << "Muito bem! Apresenta antes do Natal!" << endl;
    else if(e <= d){
        cout << "Parece o trabalho do meu filho!" << endl;
        if((d + 1) < 24)
            cout << "TCC Apresentado!" << endl;
        else
            cout << "Fail! Entao eh nataaaaal!" << endl;
    }
    else
        cout << "Eu odeio a professora!" << endl;        

    return 0;
}