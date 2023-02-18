import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int funcionarios, horasTrabalhadas;
        double valorHora, salarioFuncionario;

        funcionarios = sc.nextInt();
        horasTrabalhadas = sc.nextInt();
        valorHora = sc.nextDouble();

        salarioFuncionario = horasTrabalhadas * valorHora;

        System.out.println("NUMBER = " + funcionarios);
        System.out.printf("SALARY = U$ %.2f%n", salarioFuncionario);

        sc.close();
    }
}