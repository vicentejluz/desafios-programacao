import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int a = 7;

        for (int i = 1; i <= 9; i += 2) {
            for (int b = 1, j = a; b <= 3; j--, b++)
                System.out.println("I=" + i + " J=" + j);
            a = a + 2;
        }

        sc.close();
    }
}