import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        double x, y, media;
        int opc;

        while (true) {

            x = entradaValidacao(sc);
            y = entradaValidacao(sc);

            media = (x + y) / 2;

            System.out.printf("media = %.2f\n", media);

            do {
                System.out.println("novo calculo (1-sim 2-nao)");
                opc = sc.nextInt();
            } while (opc != 1 && opc != 2);

            if (opc == 2)
                break;
        }

        sc.close();
    }

    public static double entradaValidacao(Scanner sc) {
        double val;

        do {
            val = sc.nextDouble();
            if (val < 0.0 || val > 10.0)
                System.out.println("nota invalida");
        } while (val < 0.0 || val > 10.0);

        return val;
    }
}