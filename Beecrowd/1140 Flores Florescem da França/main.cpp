#include <iostream>

using namespace std;

int main(){
    bool log;
    string frase;

    while(true){
        getline(cin, frase);

        if(frase == "*")
            break;

        log = true;   
        
        for(int i = 0; i < frase.size(); i++){
            if(frase[i] == ' '){
                if(frase[0] != toupper(frase[i + 1]) and frase[0] != tolower(frase[i + 1])){
                    log = false;
                    break;
                }
            }

        }

        if(!log)
            cout << "N" << endl;
        else
            cout << "Y" << endl;
    }

    return 0;
}