import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, l, soma, pA, elem, pE;
        String str;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            l = sc.nextInt();
            soma = 0;
            pA = 0;
            elem = 0;
            pE = 0;
            for (int j = 0; j < l; j++) {
                str = sc.next();

                for (int k = 0; k < str.length(); k++) {
                    pA += str.toUpperCase().charAt(k) - 65;
                    elem += j;
                    pE += k;
                }

                soma = pA + elem + pE;
            }
            System.out.println(soma);
        }

        sc.close();
    }
}
