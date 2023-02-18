#include <iostream>

using namespace std;

int main(){
    int t, r, g, b, i = 1,m, p;
    string str;

    cin >> t;

    while(t--){
        cin >> str;
        cin >> r >> g >> b;

        if(str == "max"){
            if(r > g and r > b)
                p = r;
            else if(g > r and g > b)
                p = g;
            else
                p = b;
        }
        else if(str == "min"){
            if(r < g and r < b)
                p = r;
            else if(g < r and g < b)
                p = g;
            else
                p = b;
        }
        else if(str == "mean")
            p = (r + g + b) / 3;
        else
            p = (r * 0.3) + (g * 0.59) + (b * 0.11);

        cout << "Caso #" << i++ << ": " << p << endl;
    }

    return 0;
}