import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        
        int A, B, PROD;

        A = sc.nextInt();
        B = sc.nextInt();

        PROD = A * B;

        System.out.println("PROD = " + PROD);

        sc.close();
    }
 
}
