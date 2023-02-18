import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        String nome;
        double salario, totalV, TOTAL;

        nome = sc.next();

        salario = sc.nextDouble();
        totalV = sc.nextDouble();

        TOTAL = salario + totalV * 0.15;

        System.out.printf("TOTAL = R$ %.2f%n", TOTAL);

        sc.close();
    }
}