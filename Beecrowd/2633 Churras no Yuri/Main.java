import java.io.IOException;
import java.util.Scanner;
import java.util.TreeMap;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, v, x;

        String s;

        TreeMap<Integer, String> mapa = new TreeMap<>();

        while (sc.hasNext()) {
            x = 0;
            n = sc.nextInt();

            for (int i = 0; i < n; i++) {
                s = sc.next();
                v = sc.nextInt();

                mapa.put(v, s);
            }

            for (String map : mapa.values()) {
                if (x < mapa.size() - 1)
                    System.out.print(map + " ");
                else
                    System.out.println(map);
                x++;
            }
            mapa.clear();
        }

        sc.close();
    }

}