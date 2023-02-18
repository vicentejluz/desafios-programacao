import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int c, n, div, mut, menos;

        c = sc.nextInt();
        n = sc.nextInt();

        div = c / n;
        mut = div * n;
        menos = c - mut;

        System.out.println(menos);

        sc.close();
    }

}