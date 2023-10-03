import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, x, y, r, b, c, maior;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            y = sc.nextInt();

            r = (int) (Math.pow(3 * x, 2) + Math.pow(y, 2));
            b = (int) ((2 * Math.pow(x, 2)) + Math.pow(5 * y, 2));
            c = (int) ((-100 * x) + Math.pow(y, 3));

            if (r > b && r > c)
                maior = r;
            else if (b > r && b > c)
                maior = b;
            else
                maior = c;

            if (maior == r)
                System.out.println("Rafael ganhou");
            else if (maior == b)
                System.out.println("Beto ganhou");
            else
                System.out.println("Carlos ganhou");
        }

        sc.close();
    }

}