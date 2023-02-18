#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    float b;
    char c;
    string d;

    cin >> a >> b >> c;
    cin.ignore();
    getline(cin, d);

    cout << fixed;
    cout.precision(6);
    cout << a << b << c << d << endl;
    cout << a << "\t" << b << "\t" << c << "\t" << d << endl; // \t - tabulação um "tab"
    cout << setw(10) << a << setw(10) << b << setw(10) << c << setw(10) << d << endl; // setfill() é definido para o caractere de espaço por padrão se não passar parametro. setw(parametro) define a largura do campo a ser impresso.

    return 0;
}

// cout.fill()  completa com espaço com caracter que passar por parametro
// cout << setw(10) << left <<endl; // imprime justificado à esquerda
// cout << setw(10) << right << endl; // imprime justificado à direita
// cout << setw(10) << internal << endl; // imprime justificado internamente