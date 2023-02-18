#include <iostream>

using namespace std;

int main(){
    int n, tam, tamS, tamT;
    string s, t, new_string;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s >> t;
        tamS = s.size();
        tamT = t.size();

        //tam = s.size() >= t.size() ? tamS : tamT;

        if(s.size() >= t.size())
            tam = tamS;
        else
            tam = tamT;

        for(int i = 0; i < tam; i++){
            if(i < tamS){
                new_string += s[i];
            }
            if(i < tamT){
                new_string += t[i];
            }
        }
        cout << new_string << endl;
        new_string = "";
    }

    return 0;
}