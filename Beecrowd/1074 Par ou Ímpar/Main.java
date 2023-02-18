import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, x;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();

            if (x == 0)
                System.out.println("NULL");

            if (x < 0) {
                if (x % 2 == 0)
                    System.out.println("EVEN NEGATIVE");
                else
                    System.out.println("ODD NEGATIVE");
            }
            if (x > 0) {
                if (x % 2 == 0)
                    System.out.println("EVEN POSITIVE");
                else
                    System.out.println("ODD POSITIVE");
            }
        }

        sc.close();
    }
}