#include <iostream>

using namespace std;

int main(){

    int Distancia, X = 60, Y = 90;

    cin >> Distancia;

    Distancia = Distancia / ((Y / 60.0) - (X / 60.0));

    cout << Distancia << " minutos" << endl;

    return 0;
}