import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, l, cont0, cont1;

        while (true) {
            n = sc.nextInt();

            if (n == 0)
                break;

            cont0 = 0;
            cont1 = 0;

            for (int i = 0; i < n; i++) {
                l = sc.nextInt();

                if (l == 0)
                    cont0++;
                if (l == 1)
                    cont1++;
            }

            System.out.println("Mary won " + cont0 + " times and John won " + cont1 + " times");

        }

        sc.close();
    }

}