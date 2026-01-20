import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int qt = sc.nextInt();

        String[] jog1 = new String[2];
        String[] jog2 = new String[2];

        for (int i = 0; i < qt; i++) {
            jog1[0] = sc.next();
            jog1[1] = sc.next();
            jog2[0] = sc.next();
            jog2[1] = sc.next();

            int n = sc.nextInt();
            int m = sc.nextInt();

            int res = n + m;

            String escolha = "IMPAR";

            if (res % 2 == 0)
                escolha = "PAR";

            if (escolha.equals(jog1[1]))
                System.out.println(jog1[0]);
            else
                System.out.println(jog2[0]);
        }

        sc.close();
    }
}
