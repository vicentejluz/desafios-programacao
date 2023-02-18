#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int dia, mes, ano;

    scanf("%d/%d/%d", &dia, &mes, &ano);

    cout << setfill('0') << setw(2) << mes << "/" << setw(2) << dia << "/" << setw(2) << ano << endl;
    cout << setw(2) << ano << "/" << setw(2) << mes << "/" << setw(2) << dia << endl;
    cout << setw(2) << dia << "-" << setw(2) << mes << "-" << setw(2) << ano << endl;

    return 0;
}