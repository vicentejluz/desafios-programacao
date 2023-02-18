#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char A[20], B[20], C[20];

    cin >> A;
    cin >> B;
    cin >> C;

    if (strcmp(A, "vertebrado") == 0 && strcmp(B, "ave") == 0 && strcmp(C, "carnivoro") == 0)
        cout << "aguia" << endl;
    else if (strcmp(A, "vertebrado") == 0 && strcmp(B, "ave") == 0 && strcmp(C, "onivoro") == 0)
        cout << "pomba" << endl;
    else if (strcmp(A, "vertebrado") == 0 && strcmp(B, "mamifero") == 0 && strcmp(C, "onivoro") == 0)
        cout << "homem" << endl;
    else if (strcmp(A, "vertebrado") == 0 && strcmp(B, "mamifero") == 0 && strcmp(C, "herbivoro") == 0)
        cout << "vaca" << endl;
    else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "inseto") == 0 && strcmp(C, "hematofago") == 0)
        cout << "pulga" << endl;
    else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "inseto") == 0 && strcmp(C, "herbivoro") == 0)
        cout << "lagarta" << endl;
    else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "anelideo") == 0 && strcmp(C, "hematofago") == 0)
        cout << "sanguessuga" << endl;
    else if (strcmp(A, "invertebrado") == 0 && strcmp(B, "anelideo") == 0 && strcmp(C, "onivoro") == 0)
        cout << "minhoca" << endl;

    return 0;
}