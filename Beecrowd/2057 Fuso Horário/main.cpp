#include <iostream>

using namespace std;

int main(){
    int s, t, f, res;

    cin >> s >> t >> f;

    res = s + t + f;

    if(res > 23)
        res -= 24;
    else if(res < 0)
        res += 24;

    cout << res << endl;

    return 0;
}