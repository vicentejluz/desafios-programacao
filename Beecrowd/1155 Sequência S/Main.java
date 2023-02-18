import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        double c, s = 0;

        for (int a = 1; a <= 100; a++) {
            c = 1.0 / a;
            s += c;
        }
        System.out.printf("%.2f%n", s);

        sc.close();
    }
}