import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int hora_inicial, minuto_inicial, hora_final, minuto_final, hora_total, minuto_total;

        hora_inicial = sc.nextInt();
        minuto_inicial = sc.nextInt();
        hora_final = sc.nextInt();
        minuto_final = sc.nextInt();

        hora_total = hora_final - hora_inicial;

        minuto_total = minuto_final - minuto_inicial;

        if (hora_total < 0)
            hora_total += 24;

        if (minuto_total < 0) {
            minuto_total += 60;
            if(hora_total != 0)
                hora_total -= 1;
            else
                hora_total = 23;
        }

        if (minuto_total == 0 && hora_total == 0)
            System.out.println("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        else
            System.out.println("O JOGO DUROU " + hora_total + " HORA(S) E " + minuto_total + " MINUTO(S)");

        sc.close();
    }

}