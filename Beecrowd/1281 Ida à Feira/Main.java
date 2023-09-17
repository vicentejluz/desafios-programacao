import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int n, m, p;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            m = sc.nextInt();

            String[] produtos = new String[m];
            double[] precos = new double[m];
            double total = 0d;
            for (int j = 0; j < m; j++) {
                produtos[j] = sc.next();
                precos[j] = sc.nextDouble();
            }

            p = sc.nextInt();
            String[] produtosComprados = new String[p];
            int[] quantidades = new int[p];
            for (int j = 0; j < p; j++) {
                produtosComprados[j] = sc.next();
                quantidades[j] = sc.nextInt();

                for (int k = 0; k < m; k++) {
                    if (produtosComprados[j].equals(produtos[k])) {
                        total += precos[k] * quantidades[j];
                    }
                }
            }
            System.out.printf("R$ %.2f\n", total);
        }

        sc.close();

    }

}