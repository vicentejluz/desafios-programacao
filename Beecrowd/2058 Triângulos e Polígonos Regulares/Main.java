import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, res;

        n = sc.nextInt();

        res = n - 2;

        System.out.println(res);

        sc.close();
    }
}