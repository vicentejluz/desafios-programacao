import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, c;
        String aux, s;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            aux = sc.next();
            c = sc.nextInt();

            s = "";

            for (int j = 0; j < aux.length(); j++) {
                if (aux.charAt(j) - c < 'A')
                    s += (char) (aux.charAt(j) - c + 26);
                else
                    s += (char) (aux.charAt(j) - c);

            }

            System.out.println(s);
        }

        sc.close();
    }

}