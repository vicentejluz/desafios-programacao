#include <iostream>

using namespace std;

int main(){
    int cont = 0, dis, res = 0;
    double med;
    string nome;

    while(getline(cin, nome)){
        cin >> dis;

        res += dis;
        
        cont++;

        cin.ignore();
    }

    med = (double)res / cont;

    cout << fixed;
    cout.precision(1);
    cout << med << endl;

    return 0;
}