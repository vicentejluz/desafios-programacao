import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double pontoX, pontoY;

        pontoX = sc.nextDouble();
        pontoY = sc.nextDouble();

        if(pontoX == 0.0 && pontoY == 0.0)
            System.out.println("Origem");
        else if(pontoX == 0.0 && pontoY != 0.0)
            System.out.println("Eixo Y");
        else if(pontoX != 0.0 && pontoY == 0.0)
            System.out.println("Eixo X");
        else if(pontoX > 0.0 && pontoY < 0.0)
            System.out.println("Q4");
        else if(pontoX < 0.0 && pontoY > 0.0)
            System.out.println("Q2");
        else if(pontoX < 0.0 && pontoY < 0.0)
            System.out.println("Q3");
        else
            System.out.println("Q1");

        sc.close();
    }
 
}