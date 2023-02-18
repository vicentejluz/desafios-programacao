#include <iostream>

using namespace std;

int main(){
    int n, met;
    string m;
    string rev;

    cin >> n;

    while(n--){
        cin >> ws; // limpa buffer
        getline(cin, m);
        
        for(int i = 0; i < m.size(); i++){
            if(m[i] >= 97 && m[i] <= 122 || m[i] >= 65 && m[i] <= 90)
                m[i] = m[i] + 3;
        }

        for(int i = m.size() - 1; i >= 0; i--)
            rev += m[i];
        
        m = rev;
        met = m.size() / 2;

        for(int i = met; i < m.size(); i++)
            m[i] = m[i] - 1;      

        cout << m << endl;
        rev = "\0"; // limpa a string
        m = "\0"; // limpa a string
    }

    return 0;
}