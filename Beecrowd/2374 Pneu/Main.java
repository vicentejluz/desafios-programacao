import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, m, sub;

        n = sc.nextInt();
        m = sc.nextInt();

        sub = n - m;

        System.out.println(sub);

        sc.close();
    }

}