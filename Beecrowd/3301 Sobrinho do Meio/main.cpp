#include <iostream>

using namespace std;

int main(){
    int h, z, l;

    cin >> h >> z >> l;

    if((h > z and h < l) or (h < z and h > l))
        cout << "huguinho" << endl;
    else if((z > h and z < l) or (z < h and z > l))
        cout << "zezinho" << endl;
    else
        cout << "luisinho" << endl;

    return 0;
}