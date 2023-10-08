import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 12;
        double[][] m = new double[TAM][TAM];
        double soma = 0, media = 0;
        int cont = 0;
        char o;

        do {
            o = sc.next().charAt(0);
        } while (o != 'S' && o != 'M');

        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                m[i][j] = sc.nextDouble();
            }
        }

        for (int i = 0; i < TAM; i++) {
            for (int j = i + 1; j < TAM; j++) {
                soma += m[i][j];
                cont++;
            }
        }

        if (o == 'S')
            System.out.printf("%.1f\n", soma);
        else {
            media = soma / cont;
            System.out.printf("%.1f\n", media);
        }

        sc.close();
    }

}