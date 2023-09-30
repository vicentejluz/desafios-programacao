import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int m, n, res;
        String str;

        while (true) {
            m = sc.nextInt();
            n = sc.nextInt();

            if (m == 0 && n == 0)
                break;

            res = m + n;

            str = String.valueOf(res);

            str = str.replaceAll("0", "");

            System.out.println(str);
        }

        sc.close();
    }

}