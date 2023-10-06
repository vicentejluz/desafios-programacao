import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 100;
        double x;
        double[] n = new double[TAM];

        x = sc.nextDouble();

        n[0] = x;

        for (int i = 1; i < TAM; i++)
            n[i] = n[i - 1] / 2;

        for (int i = 0; i < TAM; i++)
            System.out.printf("N[%d] = %.4f\n", i, n[i]);

        sc.close();
    }

}