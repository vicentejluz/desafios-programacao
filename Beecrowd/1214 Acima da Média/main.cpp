#include <iostream>

using namespace std;

int main(){
    int c, n, res, cout;
    double por, med;

    cin >> c;

    while(c--){
        cin >> n;
        
        por = 100;
        cout = 0;
        res = 0;
        int alu[n];

        for(int i = 0; i < n; i++){
            cin >> alu[i];           
            res += alu[i];
        }

        med = (double)res / n;

        for(int i = 0; i < n; i++){
            if(alu[i] >  med){
                cout++;
            }
        }

        por *= ((double)cout / n); 

        std::cout << fixed;
        std::cout.precision(3);
        std::cout << por << "%" << std::endl;
    }

    return 0;
}