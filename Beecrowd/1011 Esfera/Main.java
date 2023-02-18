import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double Raio, VolumeEsfera;
        final double PI = 3.14159;

        Raio = sc.nextDouble();

        VolumeEsfera = (4.0 / 3) * PI * Math.pow(Raio, 3);

        System.out.printf("VOLUME = %.3f%n", VolumeEsfera);

        sc.close();
    }

}