import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 5;

        int[] v1 = new int[TAM];
        int[] v2 = new int[TAM];
        int cont = 0;

        for (int i = 0; i < TAM; i++)
            v1[i] = sc.nextInt();

        for (int i = 0; i < TAM; i++)
            v2[i] = sc.nextInt();

        for (int i = 0; i < TAM; i++) {
            if (v1[i] != v2[i])
                cont++;
        }

        if (cont == TAM)
            System.out.println("Y");
        else
            System.out.println("N");

        sc.close();
    }

}