import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, cont = 0;
        double c, div;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            c = sc.nextDouble();
            div = c / 2;
            if (div >= 1)
                cont = 1;
            while (div > 1) {
                div /= 2;
                cont++;
            }
            System.out.println(cont + " dias");
        }
        sc.close();
    }
}