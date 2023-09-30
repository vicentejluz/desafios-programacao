import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, met;
        String m, rev;
        String aux;

        n = sc.nextInt();
        sc.nextLine();

        while (n > 0) {
            m = sc.nextLine();

            aux = "";
            rev = "";

            for (int i = 0; i < m.length(); i++) {
                if (m.charAt(i) >= 97 && m.charAt(i) <= 122 || m.charAt(i) >= 65 && m.charAt(i) <= 90)
                    aux += (char) (m.charAt(i) + 3);
                else
                    aux += m.charAt(i);
            }

            for (int i = aux.length() - 1; i >= 0; i--)
                rev += aux.charAt(i);

            met = rev.length() / 2;
            m = rev.substring(0, met);

            for (int i = met; i < rev.length(); i++)
                m += (char) (rev.charAt(i) - 1);

            System.out.println(m);

            n--;
        }

        sc.close();
    }

}