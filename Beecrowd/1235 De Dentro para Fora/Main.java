import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, met;
        String str, rev_m, rev_f, rev;

        n = sc.nextInt();
        sc.nextLine();

        while (n > 0) {
            str = sc.nextLine();

            rev_m = "";
            rev_f = "";

            met = str.length() / 2;

            for (int i = met - 1; i >= 0; i--)
                rev_m += str.charAt(i);

            for (int i = str.length() - 1; i >= met; i--)
                rev_f += str.charAt(i);

            rev = rev_m + rev_f;

            System.out.println(rev);

            n--;
        }

        sc.close();
    }

}