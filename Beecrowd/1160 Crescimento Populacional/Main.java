import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int t, pa, pb;
        double g1, g2;

        t = sc.nextInt();

        for (int i = 1; i <= t; i++) {
            int j = 0;
            
            pa = sc.nextInt();
            pb = sc.nextInt();
            g1 = sc.nextDouble();
            g2 = sc.nextDouble();

            while (pa <= pb) {
                pa *= (g1 / 100.0) + 1.0;
                pb *= (g2 / 100.0) + 1.0;
                j++;

                if (j > 100) {
                    System.out.println("Mais de 1 seculo.");
                    break;
                }
            }
            if (j <= 100)
                System.out.println(j + " anos.");
        }
        sc.close();
    }
}