import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        double a, b, media;

        do {
            a = sc.nextDouble();
            if (a < 0.0 || a > 10.0)
                System.out.println("nota invalida");
        } while (a < 0 || a > 10);

        do {
            b = sc.nextDouble();
            if (b < 0.0 || b > 10.0)
                System.out.println("nota invalida");
        } while (b < 0 || b > 10);

        media = (a + b) / 2;

        System.out.printf("media = %.2f%n", media);

        sc.close();
    }
}