import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int num1, num2, menor, maior;

        num1 = sc.nextInt();
        num2 = sc.nextInt();

        if(num1 <= num2){
            menor = num1;
            maior = num2;
        } else{
            menor = num2;
            maior = num1;
        }

        if(maior % menor == 0)
            System.out.println("Sao Multiplos");
        else
            System.out.println("Nao sao Multiplos");

        sc.close();
    }
}