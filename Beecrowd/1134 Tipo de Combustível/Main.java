import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int combustivel, somaA = 0, somaG = 0, somaD = 0;

        combustivel = sc.nextInt();

        while(combustivel != 4){
            if(combustivel == 1)
                somaA++;
            else if(combustivel == 2)
                somaG++;
            else if(combustivel == 3)
                somaD++;
            
            combustivel = sc.nextInt();
        }
        
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: " + somaA);
        System.out.println("Gasolina: " + somaG);
        System.out.println("Diesel: " + somaD);

        sc.close();
    }
}