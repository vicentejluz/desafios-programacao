import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        long soma;
        int m, n;

        while (sc.hasNext()) {

            m = sc.nextInt();
            n = sc.nextInt();

            soma = fatorial(m) + fatorial(n);

            System.out.println(soma);
        }

        sc.close();
    }

    static long fatorial(int n) {
        long f = 1;

        for (int i = n; i >= 1; i--)
            f *= i;

        return f;
    }
}