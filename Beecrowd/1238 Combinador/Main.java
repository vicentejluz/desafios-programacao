import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, tam, tamS, tamT;
        String s, t, new_string;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            s = sc.next();
            t = sc.next();

            tamS = s.length();
            tamT = t.length();

            new_string = "";

            tam = s.length() >= t.length() ? tamS : tamT;

            for (int j = 0; j < tam; j++) {
                if (j < tamS)
                    new_string += s.charAt(j);

                if (j < tamT)
                    new_string += t.charAt(j);
            }

            System.out.println(new_string);

        }

        sc.close();
    }

}