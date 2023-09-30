import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        final int TAM = 12;

        int t, n, met, cont = 1;

        int[] idade = new int[TAM];

        t = sc.nextInt();

        while (t > 0) {
            n = sc.nextInt();

            for (int i = 0; i < n; i++)
                idade[i] = sc.nextInt();

            met = n / 2;

            System.out.println("Case " + (cont++) + ": " + idade[met]);

            t--;
        }

        sc.close();
    }

}