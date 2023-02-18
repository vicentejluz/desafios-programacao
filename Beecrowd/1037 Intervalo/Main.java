import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Locale.setDefault(Locale.US);
        
        Scanner sc = new Scanner(System.in);
        double num;

        num = sc.nextDouble();

        if(num < 0 || num > 100)
            System.out.println("Fora de intervalo");
        else if(num <= 25.0)
            System.out.println("Intervalo [0,25]");
        else if(num <= 50.0)
            System.out.println("Intervalo (25,50]");
        else if(num <= 75.0)
            System.out.println("Intervalo (50,75]");
        else
            System.out.println("Intervalo (75,100]");

        sc.close();
    }
 
}