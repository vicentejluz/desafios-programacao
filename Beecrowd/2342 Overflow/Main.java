import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, p, q, res;
        char c;

        n = sc.nextInt();

        p = sc.nextInt();
        c = sc.next().charAt(0);
        q = sc.nextInt();

        res = (c == '+') ? p + q : p * q;

        if (res > n)
            System.out.println("OVERFLOW");
        else
            System.out.println("OK");

        sc.close();
    }

}