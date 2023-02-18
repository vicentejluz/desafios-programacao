import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double A, B, MEDIA;

        A = sc.nextDouble();
        B = sc.nextDouble();

        MEDIA = (A * 3.5 + B * 7.5) / (3.5 + 7.5);

        System.out.printf("MEDIA = %.5f%n", MEDIA);

        sc.close();
    }

}
