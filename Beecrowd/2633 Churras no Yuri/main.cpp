#include <iostream>
#include <map>

using namespace std;


int main(){
    int n, v, x;
    string s;
    map<int, string> mapa;
    map<int, string>::iterator it;

    while(cin >> n){
        x = 0;
        for(int i = 0; i < n; i++){
            cin >> s >> v;

            mapa.insert(pair<int, string>(v, s));
        }

        for(it = mapa.begin(); it != mapa.end(); it++){ // percorre todo o mapa
                if(x < (mapa.size() - 1))
                    cout << it->second << " "; // it->first retorna a chave e it->second retorna o valor associado a chave
                else
                    cout << it->second << endl;
                x++;
        }
        mapa.clear();
    }

    return 0;    
}