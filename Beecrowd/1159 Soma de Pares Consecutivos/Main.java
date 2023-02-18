import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, soma = 0;

        do {
            x = sc.nextInt();
            if (x != 0) {
                for (int i = x, cont = 0; cont < 5; i++)
                    if (i % 2 == 0) {
                        soma += i;
                        cont++;
                    }
                System.out.println(soma);
                soma = 0;
            }
        } while (x != 0);

        sc.close();
    }
}