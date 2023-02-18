import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double sal, imposto;
        int per;

        sal = sc.nextDouble();

        if (sal >= 0.0 && sal <= 400.0) {
            imposto = sal * 0.15;
            per = 15;
        } else if (sal <= 800.0) {
            imposto = sal * 0.12;
            per = 12;
        } else if (sal <= 1200.0) {
            imposto = sal * 0.10;
            per = 10;
        } else if (sal <= 2000.0) {
            imposto = sal * 0.07;
            per = 7;
        } else {
            imposto = sal * 0.04;
            per = 4;
        }
        
        sal += imposto;
        System.out.printf("Novo salario: %.2f\n", sal);
        System.out.printf("Reajuste ganho: %.2f\n", imposto);
        System.out.println("Em percentual: " + per + " %");

        sc.close();
    }

}