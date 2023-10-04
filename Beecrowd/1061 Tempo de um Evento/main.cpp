#include <iostream>

using namespace std;

int main()
{

    int dia_i, hora_final, minuto_final, segundo_final, dias, horas, minutos, segundos;
    int hora_inicial, minuto_inicial, segundo_inicial, dia_f;
    char dia_inicial[5], dia_final[5], ponto[3];

    cin >> dia_inicial >> dia_i;
    cin >> hora_inicial >> ponto >> minuto_inicial >> ponto >> segundo_inicial;

    cin >> dia_final >> dia_f;
    cin >> hora_final >> ponto >> minuto_final >> ponto >> segundo_final;

    dias = dia_f - dia_i;
    horas = hora_final - hora_inicial;
    minutos = minuto_final - minuto_inicial;
    segundos = segundo_final - segundo_inicial;

    if (segundos < 0)
    {
        segundos += 60;
        minutos -= 1;
    }

    if (minutos < 0)
    {
        minutos += 60;
        horas -= 1;
    }

    if (horas < 0)
    {
        horas += 24;
        dias -= 1;
    }

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}