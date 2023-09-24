import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, a, l, p;

        n = sc.nextInt();

        a = sc.nextInt();
        l = sc.nextInt();
        p = sc.nextInt();

        if (n > a || n > l || n > p)
            System.out.println("N");
        else
            System.out.println("S");

        sc.close();
    }

}
