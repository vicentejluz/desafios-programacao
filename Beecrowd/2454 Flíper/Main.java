import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int p, r;

        p = sc.nextInt();
        r = sc.nextInt();

        if (p == 0)
            System.out.println("C");
        else if (p == 1 && r == 0)
            System.out.println("B");
        else
            System.out.println("A");

        sc.close();
    }

}