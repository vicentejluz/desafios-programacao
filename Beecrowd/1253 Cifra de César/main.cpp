#include <iostream>

using namespace std;

int main(){

    int n, c;
    string s;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        cin >> c;

        for(int j = 0; j < s.size(); j++){
            if(s[j] - c < 'A')
                s[j] = s[j] - c + 26;
            else
                s[j] = s[j] - c;
                
        }
        
        cout << s << endl;
        s = "\0";
    }

    return 0;
}