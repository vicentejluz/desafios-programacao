#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, met;
    string str, rev_m, rev_f, rev;

    cin >> n;
    cin.ignore(); // Lembrar de colocar fora do laço de repetição
    while(n--){
        getline(cin, str);

        met = str.length() / 2;

        for(int i = met - 1; i >= 0; i--)
            rev_m += str[i];

        for(int i = str.length() - 1; i >= met; i--)
            rev_f += str[i];
        
        rev = rev_m + rev_f;

        cout << rev << endl;

        rev_m = "";
        rev_f = "";
    }

    return 0;
}