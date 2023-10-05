import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, k, num;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            k = sc.nextInt();

            for (int j = 0; j < k; j++) {
                num = sc.nextInt();

                if (num == 1)
                    System.out.println("Rolien");
                else if (num == 2)
                    System.out.println("Naej");
                else if (num == 3)
                    System.out.println("Elehcim");
                else
                    System.out.println("Odranoel");
            }
        }

        sc.close();
    }

}