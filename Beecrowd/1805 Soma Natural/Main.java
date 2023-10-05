import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        long a, b, soma;

        a = sc.nextLong();
        b = sc.nextLong();

        soma = (a + b) * (b - a + 1) / 2;

        System.out.println(soma);

        sc.close();
    }

}
