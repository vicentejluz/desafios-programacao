import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int k, n;

        k = sc.nextInt();
        n = sc.nextInt();

        String[] nome = new String[k];

        for (int i = 0; i < k; i++)
            nome[i] = sc.next();

        Arrays.sort(nome);

        System.out.println(nome[n - 1]);
        sc.close();
    }

}