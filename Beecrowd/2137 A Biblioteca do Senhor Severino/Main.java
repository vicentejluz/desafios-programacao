import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n;

        while (sc.hasNext()) {
            n = sc.nextInt();

            List<Integer> cod = new ArrayList<>(n);

            for (int i = 0; i < n; i++)
                cod.add(sc.nextInt());

            Collections.sort(cod);

            for (int c : cod)
                System.out.printf("%04d\n", c);
        }

        sc.close();
    }

}