#include <iostream>

using namespace std;

int main(){
    int n, cycle, i = 1;

    while(true){
        cin >> n;
        if(n == -1)
            break;
        cycle = n / 2;
        cout << "Experiment " << i++ << ": " << cycle << " full cycle(s)" << endl;
    }

    return 0;
}