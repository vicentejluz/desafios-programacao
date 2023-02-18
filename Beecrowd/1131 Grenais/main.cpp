#include <iostream>

using namespace std;

int main() {

    int I, G, Grenal, VI = 0, VG = 0, Emp = 0, i = 0;

    do {
        cin >> I >> G;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> Grenal;

        if (I > G)
            VI++;
        else if (G > I)
            VG++;
        else
            Emp++;

        i++;

    } while (Grenal == 1);

    cout << i << " grenais" << endl;
    cout << "Inter:" << VI << endl;
    cout << "Gremio:" << VG << endl;
    cout << "Empates:" << Emp << endl;
    if (VI > VG)
        cout << "Inter venceu mais" << endl;
    else if (VG > VI)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;

    return 0;
}