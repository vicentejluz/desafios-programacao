import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int a, b, c;

        while (sc.hasNext()) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if (a == b && b == c)
                System.out.println("*");
            else if (a != b && a != c)
                System.out.println("A");
            else if (b != c && b != a)
                System.out.println("B");
            else
                System.out.println("C");
        }

        sc.close();
    }

}