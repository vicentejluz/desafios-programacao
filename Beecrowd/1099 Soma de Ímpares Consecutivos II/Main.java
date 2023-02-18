import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, x, y, maior, menor;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            y = sc.nextInt();

            menor = x;
            maior = y;

            if (x > y) {
                menor = y;
                maior = x;
            }

            int soma = 0;
            for (int j = menor + 1; j < maior; j++) {
                if (j % 2 != 0)
                    soma += j;
            }
            System.out.println(soma);
        }

        sc.close();
    }
}