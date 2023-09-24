import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int x;

        x = sc.nextInt();

        if (x % 2 == 0)
            System.out.println(x += 2);
        else
            System.out.println(x += 1);

        sc.close();
    }

}