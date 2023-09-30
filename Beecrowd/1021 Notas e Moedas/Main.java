import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);

        int aux;
        double notas;

        notas = sc.nextDouble();

        int n = (int) notas;
        int moedas = (int) ((notas - n) * 100);

        if ((moedas * 1000) % 10 == 9) {
            moedas++;
        }

        System.out.println("NOTAS:");
        System.out.println(n / 100 + " nota(s) de R$ 100.00");
        aux = n % 100;

        System.out.println(aux / 50 + " nota(s) de R$ 50.00");
        aux = aux % 50;

        System.out.println(aux / 20 + " nota(s) de R$ 20.00");
        aux = aux % 20;

        System.out.println(aux / 10 + " nota(s) de R$ 10.00");
        aux = aux % 10;

        System.out.println(aux / 5 + " nota(s) de R$ 5.00");
        aux = aux % 5;

        System.out.println(aux / 2 + " nota(s) de R$ 2.00");
        aux = aux % 2;

        System.out.println("MOEDAS:");
        System.out.println(aux + " moeda(s) de R$ 1.00");
        moedas = moedas % 100;

        System.out.println(moedas / 50 + " moeda(s) de R$ 0.50");
        moedas = moedas % 50;

        System.out.println(moedas / 25 + " moeda(s) de R$ 0.25");
        moedas = moedas % 25;

        System.out.println(moedas / 10 + " moeda(s) de R$ 0.10");
        moedas = moedas % 10;

        System.out.println(moedas / 5 + " moeda(s) de R$ 0.05");
        moedas = moedas % 5;

        System.out.println(moedas + " moeda(s) de R$ 0.01");

        sc.close();
    }

}