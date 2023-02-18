// string::npos - até o final da string

#include <iostream>

using namespace std;

int main(){
    int n, cont;
    string str;

    cin >> n;

    while(n--){
        cin >> str;

        if((str.find('Q') != string::npos) and (str.find('J') != string::npos)
            and (str.find('K') != string::npos) and str.find('A') != string::npos) // find() procura um caracter espeficico na string
            cout << "Aaah muleke" << endl;
        else
            cout << "Ooo raca viu" << endl;
    }
    return 0;
}