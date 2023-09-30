import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        DecimalFormat format = new DecimalFormat("0.000");

        int c, n;

        c = sc.nextInt();

        for (int i = 0; i < c; i++) {
            n = sc.nextInt();

            double por = 100D;
            int cout = 0;
            int res = 0;
            int[] alu = new int[n];

            for (int j = 0; j < n; j++) {
                alu[j] = sc.nextInt();
                res += alu[j];
            }

            double med = (double) res / n;

            for (int j = 0; j < n; j++) {
                if (alu[j] > med)
                    cout++;
            }

            por *= ((double) cout / n);
            System.out.println(format.format(por) + "%");
        }

        sc.close();
    }

}
