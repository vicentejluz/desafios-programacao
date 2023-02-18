import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n;

        n = sc.nextInt();

        for (int i = 1; i <= (4 * n - 1); i += 4) {
            for (int j = i; j <= i + 2; j++) {
                System.out.print(j + " ");
            }
            System.out.println("PUM");
        }

        sc.close();
    }
}