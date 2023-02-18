#include <iostream>

using namespace std;

int main(){
    int h, e, a, o, w, x, alianca, inimigo;

    cin >> h >> e >> a >> o >> w >> x; 

    alianca = h + e + a + x;
    inimigo = o + w;

    if(alianca >= inimigo)
        cout << "Middle-earth is safe." << endl;
    else
        cout << "Sauron has returned." << endl;

    return 0;
}