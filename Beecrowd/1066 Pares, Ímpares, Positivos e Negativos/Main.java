import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int x, i, pos = 0, neg = 0, imp = 0, par = 0;

            for (i = 0; i < 5; i++) {
                x = sc.nextInt();
                if (x < 0)
                    neg++;
                else if (x > 0)
                    pos++;
                if (x % 2 == 0)
                    par++;
                else
                    imp++;
            }

            System.out.println(par + " valor(es) par(es)");
            System.out.println(imp + " valor(es) impar(es)");
            System.out.println(pos + " valor(es) positivo(s)");
            System.out.println(neg + " valor(es) negativo(s)");

            sc.close();
        }
    }

}