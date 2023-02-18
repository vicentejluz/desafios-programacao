import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new  Scanner(System.in);
        
        int valor1, valor2, soma;

        valor1 = sc.nextInt();
        valor2 = sc.nextInt();

        soma = valor1 + valor2;

        System.out.println("SOMA = " + soma);

        sc.close();
    }
 
}