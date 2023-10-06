import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 5;
        final int NUM_INT = 15;
        int[] vP = new int[TAM];
        int[] vI = new int[TAM];
        int P = 0, I = 0, x;

        for (int i = 0; i < NUM_INT; i++) {
            x = sc.nextInt();

            if (x % 2 == 0) {
                vP[P] = x;
                P++;
                if (P == TAM) {
                    for (int j = 0; j < TAM; j++)
                        System.out.println("par[" + j + "] = " + vP[j]);
                    P = 0;
                }
            } else {
                vI[I] = x;
                I++;
                if (I == TAM) {
                    for (int j = 0; j < TAM; j++)
                        System.out.println("impar[" + j + "] = " + vI[j]);
                    I = 0;
                }
            }
        }

        for (int j = 0; j < I; j++)
            System.out.println("impar[" + j + "] = " + vI[j]);
        I = 0;

        for (int j = 0; j < P; j++)
            System.out.println("par[" + j + "] = " + vP[j]);
        P = 0;

        sc.close();
    }

}