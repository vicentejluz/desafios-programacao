import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int x, i, par = 0;

            for (i = 0; i < 5; i++) {
                x = sc.nextInt();
                if (x % 2 == 0)
                    par++;
            }

            System.out.println(par + " valores pares");

            sc.close();
        }
    }

}