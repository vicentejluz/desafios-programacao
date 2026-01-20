import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int t = sc.nextInt();

            if (t == 2014)
                System.out.println((t - 2013) + " D.C.");
            else if (t < 2014)
                System.out.println((2015 - t) + " D.C.");
            else
                System.out.println((t - 2014) + " A.C.");
        }

        sc.close();
    }
}
