import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int i, x;
        String s, aux;

        while (sc.hasNext()) {
            aux = sc.nextLine();
            x = 0;
            s = "";
            for (i = 0; i < aux.length(); i++) {
                if (x % 2 == 0)
                    s += aux.toUpperCase().charAt(i);
                else
                    s += aux.toLowerCase().charAt(i);
                if (s.charAt(i) != ' ')
                    x++;
            }

            System.out.println(s);
        }

        sc.close();
    }

}