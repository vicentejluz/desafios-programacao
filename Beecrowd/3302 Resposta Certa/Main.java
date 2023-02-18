import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, r;

        n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            r = sc.nextInt();
            System.out.println("resposta " + i + ": " + r);
        }

        sc.close();
    }

}