import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, h, m, s;

        n = sc.nextInt();

        h = n / 3600;
        m = (n / 60) % 60;
        s = n % 60;

        System.out.println(h + ":" + m + ":" + s);

        sc.close();
    }

}