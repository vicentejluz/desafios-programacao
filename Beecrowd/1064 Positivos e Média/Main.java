import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        try (Scanner sc = new Scanner(System.in)) {
            int i, pos = 0;
            double valores, media = 0;

            for (i = 0; i < 6; i++) {
                valores = sc.nextDouble();

                if (valores > 0) {
                    pos++;
                    media += valores;
                }
            }

            media /= pos;

            System.out.println(pos + " valores positivos");
            System.out.printf("%.1f%n", media);

            sc.close();
        }
    }

}