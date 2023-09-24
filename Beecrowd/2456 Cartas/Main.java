import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int a, b, c, d, e;

        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        e = sc.nextInt();

        if (a < b && b < c && c < d && d < e)
            System.out.println("C");
        else if (a > b && b > c && c > d && d > e)
            System.out.println("D");
        else
            System.out.println("N");

        sc.close();
    }
}
