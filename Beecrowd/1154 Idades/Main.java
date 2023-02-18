import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, cont = 0;
        double media = 0;

        do {
            x = sc.nextInt();

            if (x >= 0) {
                media += x;
                cont++;
            }

        } while (x >= 0);

        media /= cont;

        System.out.printf("%.2f%n", media);

        sc.close();
    }
}