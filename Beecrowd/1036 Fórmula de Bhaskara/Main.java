import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double a, b, c, r1, r2, delta;

        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();

        delta = Math.pow(b, 2) - 4.0 * a * c;

        if (delta < 0.0 || a == 0.0) {
            System.out.println("Impossivel calcular");
        } else {
            r1 = (-b + Math.sqrt(delta)) / (2.0 * a);
            r2 = (-b - Math.sqrt(delta)) / (2.0 * a);

            System.out.printf("R1 = %.5f\n", r1);
            System.out.printf("R2 = %.5f\n", r2);
        }

        sc.close();
    }
}