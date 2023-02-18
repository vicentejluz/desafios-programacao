#include <iostream>

using namespace std;

int main() {

    int idade, ano, mes, dia;

    cin >> idade;

    ano = idade / 365;
    mes = (idade % 365) / 30;
    dia = (idade % 365) % 30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}