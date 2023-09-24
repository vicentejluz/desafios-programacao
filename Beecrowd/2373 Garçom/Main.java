import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, l, c, res = 0;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            l = sc.nextInt();
            c = sc.nextInt();

            if (l > c)
                res += c;
        }

        System.out.println(res);

        sc.close();
    }

}