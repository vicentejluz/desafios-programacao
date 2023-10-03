import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 20;

        int[] n = new int[TAM];

        for (int i = 0; i < TAM; i++)
            n[i] = sc.nextInt();

        for (int i = TAM - 1, j = 0; i >= 0; i--, j++)
            System.out.println("N[" + j + "] = " + n[i]);

        sc.close();
    }

}