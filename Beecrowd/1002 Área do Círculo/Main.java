import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        
        double area, raio;
        final double N = 3.14159;

        raio = sc.nextDouble();

        area = N * Math.pow(raio, 2.0);

        System.out.printf("A=%.4f%n", area);

        sc.close();
    }
 
}