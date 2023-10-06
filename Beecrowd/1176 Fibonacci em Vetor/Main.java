import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int TAM = 61;
        int n, t;
        long[] fibonacci = new long[TAM];
        long ant = 0, prox = 1;

        for (int i = 0; i <= 60; i++)
            if (i < 2)
                fibonacci[i] = ant + i;
            else {
                fibonacci[i] = ant + prox;
                ant = prox;
                prox = fibonacci[i];
            }

        t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            n = sc.nextInt();
            System.out.println("Fib(" + n + ") = " + fibonacci[n]);
        }

        sc.close();
    }

}