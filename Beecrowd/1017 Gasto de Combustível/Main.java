import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int t, v;
        double qtde;

        t = sc.nextInt();
        v = sc.nextInt();

        qtde = t * v / 12.0;

        System.out.printf("%.3f%n", qtde);

        sc.close();
    }

}