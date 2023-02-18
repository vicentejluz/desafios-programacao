import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double A, B, C, MEDIA;

        A = sc.nextDouble();
        B = sc.nextDouble();
        C = sc.nextDouble();

        MEDIA = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);

        System.out.printf("MEDIA = %.1f%n", MEDIA);

        sc.close();
    }

}