import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int diaI, horaFinal, minutoFinal, segundoFinal, dias, horas, minutos, segundos;
        int horaInicial, minutoInicial, segundoInicial, diaF;
        String diaInicial, diaFinal, aux;

        diaInicial = sc.next();
        diaI = sc.nextInt();
        sc.nextLine();
        aux = sc.nextLine();
        String[] split = aux.split(" : ");
        horaInicial = Integer.parseInt(split[0]);
        minutoInicial = Integer.parseInt(split[1]);
        segundoInicial = Integer.parseInt(split[2]);

        diaFinal = sc.next();
        diaF = sc.nextInt();
        sc.nextLine();
        aux = sc.nextLine();
        split = aux.split(" : ");
        horaFinal = Integer.parseInt(split[0]);
        minutoFinal = Integer.parseInt(split[1]);
        segundoFinal = Integer.parseInt(split[2]);

        dias = diaF - diaI;
        horas = horaFinal - horaInicial;
        minutos = minutoFinal - minutoInicial;
        segundos = segundoFinal - segundoInicial;

        if (segundos < 0) {
            segundos += 60;
            minutos--;

        }

        if (minutos < 0) {
            minutos += 60;
            horas--;
        }

        if (horas < 0) {
            horas += 24;
            dias--;
        }
        System.out.println(
                dias + " dia(s)\n" + horas + " hora(s)\n" + minutos + " minuto(s)\n" + segundos + " segundo(s)");

        sc.close();
    }

}