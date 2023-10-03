import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, x;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();

            if (EPrimo(x))
                System.out.println("Prime");
            else
                System.out.println("Not Prime");
        }

        sc.close();
    }

    public static boolean EPrimo(int x) {
        int i;
        double raiz;
        if (x == 2)
            return true;
        else if (x % 2 == 0)
            return false;
        else {
            i = 3;
            raiz = Math.sqrt(x);
            while (i <= raiz) {
                if (x % i == 0)
                    return false;
                i = i + 2;
            }
        }
        return true;
    }

}
