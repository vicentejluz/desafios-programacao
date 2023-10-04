#include <stdio.h>

int main()
{

    int dia_i, hora_final, minuto_final, segundo_final, dias, horas, minutos, segundos;
    int hora_inicial, minuto_inicial, segundo_inicial, dia_f;
    char dia_inicial[5], dia_final[5];

    scanf("%s %d", &dia_inicial, &dia_i);
    scanf("%d : %d : %d", &hora_inicial, &minuto_inicial, &segundo_inicial);

    scanf("%s %d", &dia_final, &dia_f);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);

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

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);

    return 0;
}