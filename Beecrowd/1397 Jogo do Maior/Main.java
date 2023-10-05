import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, a, b, contA, contB;

        while (true) {
            n = sc.nextInt();

            if (n == 0)
                break;

            contA = 0;
            contB = 0;

            for (int i = 0; i < n; i++) {
                a = sc.nextInt();
                b = sc.nextInt();

                if (a > b)
                    contA++;
                else if (a < b)
                    contB++;
            }

            System.out.println(contA + " " + contB);

        }

        sc.close();
    }

}