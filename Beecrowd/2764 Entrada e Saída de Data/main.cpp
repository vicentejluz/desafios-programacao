#include <iostream>

using namespace std;

int main(){
    string data, data2;

    cin >> data;

    data2.append(data, 3, 3); // append() essa função de membro acrescenta caracteres no final da string.
    data2.append(data, 0, 3); // append() essa função de membro acrescenta caracteres no final da string.
    data2.append(data, 6, 7); // append() essa função de membro acrescenta caracteres no final da string.


    cout << data2 << endl;

    data2.assign(data, 6, 7); // assing() esta função atribui um novo valor à string, substituindo todo o seu conteúdo atual.
    data2.append(data, 2, 4); // append() essa função de membro acrescenta caracteres no final da string.
    data2.append(data, 0, 2); // append() essa função de membro acrescenta caracteres no final da string.

    cout << data2 << endl;
    
    for(int i = 0; i < data.size(); i++){
        if(data[i] == '/')
            data[i] = '-';

    }
    
    cout << data << endl;

    return 0;
}