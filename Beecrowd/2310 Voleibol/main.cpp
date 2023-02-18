#include <iostream>

using namespace std;

int main(){
    int n, s, b, a, s1, b1, a1, res1[6] = {0, 0, 0, 0, 0, 0};
    double res[3];
    string str;

    cin >> n;

    while(n--){

        cin >> str;
        cin >> s >> b >> a;
        cin >> s1 >> b1 >> a1;

        res1[0] += s;
        res1[1] += b;
        res1[2] += a;
        res1[3] += s1;
        res1[4] += b1;
        res1[5] += a1;

    }

    res[0] = (double)res1[3] / res1[0] * 100.0;
    res[1] = (double)res1[4] / res1[1] * 100.0;
    res[2] = (double)res1[5] / res1[2] * 100.0;

    cout << fixed;
    cout.precision(2);
    cout << "Pontos de Saque: " << res[0] << " %." << endl;
    cout << "Pontos de Bloqueio: " << res[1] << " %." << endl;
    cout << "Pontos de Ataque: "<< res[2] << " %." << endl;

    return 0;
}