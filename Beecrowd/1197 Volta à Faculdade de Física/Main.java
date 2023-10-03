import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int v, t, dobro;
        String line = br.readLine();
        while (line != null) {
            String[] number = line.split(" ");
            v = Integer.parseInt(number[0]);
            t = Integer.parseInt(number[1]);

            dobro = (v * t) * 2;

            System.out.println(dobro);

            line = br.readLine();
        }

        br.close();
    }

}