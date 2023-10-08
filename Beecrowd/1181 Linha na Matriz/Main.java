import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 12;
        double[][] m = new double[TAM][TAM];
        double soma = 0, media = 0;
        int l;
        char t;

        l = sc.nextInt();

        do {
            t = sc.next().charAt(0);
        } while (t != 'S' && t != 'M');

        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++)
                m[i][j] = sc.nextDouble();
        }

        for (int j = 0; j < TAM; j++)
            soma += m[l][j];

        media = soma / TAM;

        if (t == 'S')
            System.out.printf("%.1f\n", soma);
        else
            System.out.printf("%.1f\n", media);

        sc.close();
    }

}