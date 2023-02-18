import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int numeroPeca1, codPeca1, numeroPeca2, codPeca2;
        double valorUnitarioPeca1, valorUnitarioPeca2, valorPago;

        codPeca1 = sc.nextInt();
        numeroPeca1 = sc.nextInt();
        valorUnitarioPeca1 = sc.nextDouble();

        codPeca2 = sc.nextInt();
        numeroPeca2 = sc.nextInt();
        valorUnitarioPeca2 = sc.nextDouble();

        valorPago = (Double) (numeroPeca1 * valorUnitarioPeca1 + numeroPeca2 * valorUnitarioPeca2);

        System.out.printf("VALOR A PAGAR: R$ %.2f%n", valorPago);

        sc.close();
    }
 
}