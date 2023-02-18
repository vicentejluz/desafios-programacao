import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int X;
        double Y;

        X = sc.nextInt();
        Y = sc.nextDouble();

        System.out.printf("%.3f km/l%n", X / Y);

        sc.close();
    }

}