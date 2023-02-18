import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int a, n, soma = 0;

        a = sc.nextInt();

        do {
            n = sc.nextInt();
        } while (n <= 0);

        for (int i = a, cont = 0; cont < n; i++, cont++) {
            soma += i;
        }
        System.out.println(soma);

        sc.close();
    }
}