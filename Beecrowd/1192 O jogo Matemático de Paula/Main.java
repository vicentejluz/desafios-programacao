import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, cal;
        String c;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            c = sc.next();
            if (c.charAt(0) == c.toLowerCase().charAt(2))
                cal = (c.charAt(0) - '0') * (c.charAt(2) - '0');
            else if (Character.isLowerCase(c.charAt(1)))
                cal = (c.charAt(0) - '0') + (c.charAt(2) - '0');
            else
                cal = (c.charAt(2) - '0') - (c.charAt(0) - '0');

            System.out.println(cal);
        }

        sc.close();
    }

}