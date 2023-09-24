import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int p1, c1, p2, c2, esq, dir;

        p1 = sc.nextInt();
        c1 = sc.nextInt();
        p2 = sc.nextInt();
        c2 = sc.nextInt();

        esq = p1 * c1;
        dir = p2 * c2;

        if (esq == dir)
            System.out.println("0");
        else if (esq > dir)
            System.out.println("-1");
        else
            System.out.println("1");

        sc.close();
    }

}