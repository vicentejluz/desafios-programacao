import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int l, d, k, p, res;

        l = sc.nextInt();
        d = sc.nextInt();

        k = sc.nextInt();
        p = sc.nextInt();

        res = ((l / d) * p) + (l * k);

        System.out.println(res);

        sc.close();
    }

}
