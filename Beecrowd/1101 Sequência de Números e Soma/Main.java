import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int m, n, aux, soma;

        while (true) {
            soma = 0;
            m = sc.nextInt();
            n = sc.nextInt();
            if (m <= 0 || n <= 0) {
                break;
            }
            if (m > n) {
                aux = m;
                m = n;
                n = aux;
            }

            for (int i = m; i <= n; i++) {
                soma += i;
                System.out.print(i + " ");
            }
            System.out.println("Sum=" + soma);
        }

        sc.close();
    }
}