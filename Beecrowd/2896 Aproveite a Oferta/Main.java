import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int t, n, k, div, mut, sub, som;

        t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            k = sc.nextInt();

            if (k > n) {
                System.out.println(n);
            } else {
                div = n / k;
                mut = div * k;
                sub = n - mut;
                som = div + sub;
                System.out.println(som);
            }
        }

        sc.close();
    }

}