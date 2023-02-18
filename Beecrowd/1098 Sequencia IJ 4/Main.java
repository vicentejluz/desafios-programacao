import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        float k = 0.2f;

        for (float i = 0; i <= 2.2; i += 0.2) {
            for (float j = 1; j <= 3; j++) {
                if (i == 0)
                    System.out.printf("I=0 J=%.0f%n", j);
                else if (i == 1)
                    System.out.printf("I=1 J=%.0f%n", j + k);
                else if (i > 2)
                    System.out.printf("I=2 J=%.0f%n", j + k);
                else
                    System.out.printf("I=%.1f J=%.1f%n", i, j + k);
                if (j == 3 && i > 0)
                    k += 0.2;
            }
        }

        sc.close();
    }
}