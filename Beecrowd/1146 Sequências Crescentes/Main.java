import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x;

        do {
            x = sc.nextInt();
            for (int i = 1; i < x; i++)
                System.out.print(i + " ");
            if (x != 0)
                System.out.println(x);
        } while (x != 0);

        sc.close();
    }
}