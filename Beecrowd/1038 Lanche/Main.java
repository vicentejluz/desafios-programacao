import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int cod, quant;
        double preco, valorPagar;

        cod = sc.nextInt();
        quant = sc.nextInt();

        if(cod == 1)
            preco = 4.0;
        else if(cod == 2)
            preco = 4.5;
        else if(cod == 3)
            preco = 5.0;
        else if(cod == 4)
            preco = 2.0;
        else
            preco = 1.5;
        
        valorPagar = preco * quant;

        System.out.printf("Total: R$ %.2f\n", valorPagar);

        sc.close();
    }
}