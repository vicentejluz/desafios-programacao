import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, la, lb, sa, sb;

        n = sc.nextInt();
        la = sc.nextInt();
        lb = sc.nextInt();
        sa = sc.nextInt();
        sb = sc.nextInt();

        if ((n >= la && n <= lb) && (n >= sa && n <= sb))
            System.out.println("possivel");
        else
            System.out.println("impossivel");

        sc.close();

    }

}