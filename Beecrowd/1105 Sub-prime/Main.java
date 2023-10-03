import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int B, N, D, C, V, j;

        do {
            B = sc.nextInt();
            N = sc.nextInt();

            if (B != 0 && N != 0) {
                j = 0;

                int[] Vx = new int[B + 1];

                for (int i = 1; i <= B; i++)
                    Vx[i] = sc.nextInt();

                for (int i = 0; i < N; i++) {
                    D = sc.nextInt();
                    C = sc.nextInt();
                    V = sc.nextInt();

                    Vx[D] -= V;
                    Vx[C] += V;
                }

                for (int i = 1; i <= B; i++) {
                    if (Vx[i] < 0)
                        j = 1;
                }

                if (j == 1)
                    System.out.println("N");
                else
                    System.out.println("S");
            }

        } while (B != 0 && N != 0);

        sc.close();
    }

}