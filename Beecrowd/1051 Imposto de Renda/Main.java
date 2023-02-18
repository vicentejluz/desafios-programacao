import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        double renda, valorSobra, valorTotal;

        renda = sc.nextDouble();
        
        if(renda >= 0.0 && renda <= 2000.00){
            System.out.println("Isento");
        }
        else if(renda <= 3000){
            valorTotal = (renda - 2000.00) * 0.08;
            System.out.printf("R$ %.2f\n", valorTotal);
        }
        else if(renda <= 4500){
            valorSobra = renda - 3000;
            valorTotal = ((valorSobra) * 0.18) + ((renda - valorSobra - 2000) * 0.08);
            System.out.printf("R$ %.2f\n", valorTotal); 
        }
        else{
            valorSobra = renda - 4500;
            valorTotal = ((valorSobra) * 0.28) + ((renda - valorSobra - 3000) * 0.18) + ((renda - valorSobra - 3500) * 0.08);
            System.out.printf("R$ %.2f\n", valorTotal);         
        }

        sc.close();
    }
 
}