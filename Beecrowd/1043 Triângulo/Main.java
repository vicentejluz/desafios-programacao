import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double a, b, c, per, ar;

        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();

        if (((b - c) < a && a < (b + c)) && ((a - c) < b && b < (a + c)) && ((a - b) < c && c < (a + b))) {
            per = a + b + c;
            System.out.printf("Perimetro = %.1f%n", per);
        } else {
            ar = ((a + b) * c) / 2;
            System.out.printf("Area = %.1f%n", ar);
        }
        sc.close();
    }

}