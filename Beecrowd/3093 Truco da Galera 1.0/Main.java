import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n;
        String str;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            str = sc.next();

            if (str.contains("Q") && str.contains("J") && str.contains("K") && str.contains("A")) {
                System.out.println("Aaah muleke");
            } else
                System.out.println("Ooo raca viu");
        }

        sc.close();
    }

}