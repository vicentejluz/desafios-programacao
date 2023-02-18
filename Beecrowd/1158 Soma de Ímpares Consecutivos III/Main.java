import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, x, y, soma = 0;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            y = sc.nextInt();
            for (int j = x, cont = 0; cont < y; j++)
                if (j % 2 != 0) {
                    soma += j;
                    cont++;
                }
            System.out.println(soma);
            soma = 0;
        }

        sc.close();
    }
}