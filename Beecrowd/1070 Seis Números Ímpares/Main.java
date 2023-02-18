import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int x, a, b;

            x = sc.nextInt();

            if (x % 2 == 0) {
                for (a = x + 1; a <= x + 11; a = a + 2)
                    System.out.println(a);
            } else {
                for (b = x; b <= x + 10; b = b + 2)
                    System.out.println(b);
            }

            sc.close();
        }
    }

}