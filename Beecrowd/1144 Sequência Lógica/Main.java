import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n;

        n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            System.out.printf("%d %d %d%n", i, (int) Math.pow(i, 2), (int) Math.pow(i, 3));
            System.out.printf("%d %d %d%n", i, (int) (Math.pow(i, 2) + 1), (int) (Math.pow(i, 3) + 1));
        }

        sc.close();
    }
}