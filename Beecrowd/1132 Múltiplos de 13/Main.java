import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, y, aux, soma = 0;

        x = sc.nextInt();
        y = sc.nextInt();

        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }

        for (int i = x; i <= y; i++) {
            if (i % 13 != 0) {
                soma += i;
            }
        }

        System.out.println(soma);

        sc.close();
    }
}
