#include <iostream>

using namespace std;

int main(){
    string str, str2, str3;
    int j = 0;

    cin >> str;

    for(int i = 0; str[i] != '.'; i++){
        str2 += str[i];
        j++;
    }

    
    for(int i = j + 1; i < str.size(); i++){
        str3 += str[i];
    }

    cout << stoi(str3) << "." << stoi(str2) << endl; // stoi() converte uma string para inteiro

    return 0;
}