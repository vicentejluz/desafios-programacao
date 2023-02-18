import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int a, b, c, MaiorAB;

        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        MaiorAB = (a + b + Math.abs(a - b)) / 2;
        MaiorAB = (MaiorAB + c + Math.abs(MaiorAB - c)) / 2;

        System.out.println(MaiorAB + " eh o maior");

        sc.close();
    }

}