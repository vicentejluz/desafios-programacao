import static java.lang.Math.pow;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static final double PI = 3.14;

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            double v = sc.nextDouble();
            double d = sc.nextDouble();

            double raio = d / 2;
            double area = PI * pow(raio, 2);
            double alt = v / area;

            System.out.println(String.format("ALTURA = %.2f", alt));
            System.out.println(String.format("AREA = %.2f", area));
        }

        sc.close();

    }
}
