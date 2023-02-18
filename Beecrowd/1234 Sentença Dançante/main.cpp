#include <iostream>

using namespace std;
 
int main() {
    int i, x;
    string s;

    while(getline(cin, s)){ 
        x = 0;
        for(i = 0; i < s.size(); i++){
            if(x % 2 == 0)
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
            if(s[i] != ' ') 
                x++;            
        }

        cout << s << endl;
    }
 
    return 0;
}