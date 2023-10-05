import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int l, r, soma;

        while (true) {
            l = sc.nextInt();
            r = sc.nextInt();

            if (l == 0 && r == 0)
                break;

            soma = l + r;

            System.out.println(soma);

        }

        sc.close();
    }

}