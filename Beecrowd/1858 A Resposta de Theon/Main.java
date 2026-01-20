import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] t = new int[n];

        for (int i = 0; i < n; i++) {
            t[i] = sc.nextInt();
        }

        System.out.println(obterPosMenor(t, n));

        sc.close();
    }

    public static int obterPosMenor(int[] t, int n) {
        int pos = 0;
        int menor = t[0];
        for (int i = 0; i < n; i++) {
            if (t[i] < menor) {
                menor = t[i];
                pos = i;
            }
        }

        return pos + 1;
    }
}
