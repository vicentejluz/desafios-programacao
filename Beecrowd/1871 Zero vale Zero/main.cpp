#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // otimiza o cin e cout
    cin.tie(NULL); // otimiza o cin e cout
    int m, n, res;
    string str;

    while(true){
        cin >> m >> n;

        if(m == 0 and n == 0)
            break;

        res = m + n;

        str = to_string(res); // transforma o res em string

        str.erase(remove(str.begin(), str.end(), '0'), str.end()); //remove o 0 da string

        cout << str << endl;

    }

    return 0;
}