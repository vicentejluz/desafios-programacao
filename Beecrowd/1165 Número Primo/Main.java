import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, n;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            if (ePrimo(x))
                System.out.println(x + " eh primo");
            else
                System.out.println(x + " nao eh primo");
        }
        sc.close();
    }

    static boolean ePrimo(int pX) {
        for (int i = 2; i < pX; i++) {
            if (pX % i == 0)
                return false;
        }
        return true;
    }
}