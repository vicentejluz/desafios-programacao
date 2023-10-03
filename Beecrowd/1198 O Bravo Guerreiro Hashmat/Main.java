import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line = br.readLine();

        while (line != null) {
            String[] number = line.split(" ");
            long hashmat = Long.parseLong(number[0]);
            long oponente = Long.parseLong(number[1]);

            long sub = hashmat - oponente;

            if (sub < 0) {
                sub *= -1;
            }

            System.out.println(sub);

            line = br.readLine();
        }

        br.close();
    }

}