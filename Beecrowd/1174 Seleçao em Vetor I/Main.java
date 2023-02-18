import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        double[] a = new double[100];

        for (int i = 0; i < a.length; i++)
            a[i] = sc.nextDouble();

        for (int i = 0; i < a.length; i++)
            if (a[i] <= 10.0)
                System.out.printf("A[%d] = %.1f\n", i, a[i]);

        sc.close();
    }
}