import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, x;

        n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                x = (int) Math.pow(i, 2.0);
                System.out.println(i + "^2 = " + x);
            }
        }

        sc.close();
    }
}