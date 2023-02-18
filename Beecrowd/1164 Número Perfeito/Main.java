import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, x, soma = 0;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            for (int j = 1; j < x; j++) {
                if (x % j == 0)
                    soma += j;
            }
            if (soma == x)
                System.out.println(x + " eh perfeito");
            else
                System.out.println(x + " nao eh perfeito");
            soma = 0;
        }
        sc.close();
    }
}