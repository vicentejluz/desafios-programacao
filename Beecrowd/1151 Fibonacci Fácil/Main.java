import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, ant = 0, prox = 1, fibonacci;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (i < 2)
                fibonacci = ant + i;
            else {
                fibonacci = ant + prox;
                ant = prox;
                prox = fibonacci;
            }
            if (i < n - 1)
                System.out.print(fibonacci + " ");
            else
                System.out.println(fibonacci);
        }

        sc.close();
    }
}