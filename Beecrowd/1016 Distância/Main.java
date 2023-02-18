import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        final int X = 60, Y = 90;
        int distancia;

        distancia = sc.nextInt();

        distancia /= ((Y / 60.0) - (X / 60.0));

        System.out.println(distancia + " minutos");

        sc.close();
    }

}