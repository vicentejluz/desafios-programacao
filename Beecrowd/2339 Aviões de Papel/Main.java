import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int c, p, f, res;

        c = sc.nextInt();
        p = sc.nextInt();
        f = sc.nextInt();

        res = c * f;

        if (res <= p)
            System.out.println("S");
        else
            System.out.println("N");

        sc.close();
    }

}
