import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        String num;

        while (true) {
            num = sc.next();

            if (num.equals("0"))
                break;

            int j = 0;
            int res = 0;
            int tam = num.length();
            int[] vet = new int[tam];

            for (int i = tam; i >= 1; i--) {
                vet[j] = fatorial(i);
                j++;
            }

            for (int i = 0; i < tam; i++)
                res += (num.charAt(i) - 48) * vet[i];

            System.out.println(res);

        }

        sc.close();
    }

    public static int fatorial(int n) {
        if (n == 0)
            return 1;
        return fatorial(n - 1) * n;
    }

}