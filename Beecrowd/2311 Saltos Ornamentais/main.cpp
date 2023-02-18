#include <iostream>

using namespace std;

double obterMaior(double s[], int tam);
double obterMenor(double s[], int tam);

int main(){
    const int tam = 7;
    int n, i;
    string str;
    double gd, saltos[tam], menor, maior, res;

    cin >> n;

    while(n--){
        cin >> str;
        cin >> gd;
        for(i = 0; i < tam; i++){
            cin >> saltos[i];
            res += saltos[i];
        }

        maior = obterMaior(saltos, tam);
        menor = obterMenor(saltos, tam);

        res = (res - (maior + menor)) * gd;  

        cout << fixed;
        cout.precision(2);
        cout << str << " " << res << endl;

        res = 0;
    }

    return 0;
}

double obterMaior(double s[], int tam){
    int i;
    double maior;

    maior = s[0];

    for(i = 0; i < tam; i++){
        if(maior < s[i])
            maior = s[i];
    }

    return maior;
}

double obterMenor(double s[], int tam){
    int i;
    double menor;

    menor = s[0];

    for(i = 0; i < tam; i++){
        if(menor > s[i])
            menor = s[i];
    }

    return menor;
}