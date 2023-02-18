import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        double aux, s = 1;
        double aux2 = 1;

        for (int i = 3; i < 40; i++) {
            if (i % 2 != 0) {
                aux2 *= 2;
                aux = i / aux2;
                s += aux;
            }
        }
        System.out.printf("%.2f%n", s);

        sc.close();
    }
}