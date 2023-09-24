import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, t, v, res = 0;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            t = sc.nextInt();
            v = sc.nextInt();
            res += t * v;
        }

        System.out.println(res);

        sc.close();
    }

}
