import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int s = sc.nextInt();
        int t = sc.nextInt();
        int f = sc.nextInt();

        int res = s + t + f;

        if (res > 23)
            res -= 24;
        else if (res < 0)
            res += 24;

        System.out.println(res);

        sc.close();
    }
}
