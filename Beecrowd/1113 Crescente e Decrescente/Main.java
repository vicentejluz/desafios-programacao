import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int X, Y;

        while(true){
            X = sc.nextInt();
            Y = sc.nextInt();
            if(X == Y)
                break;
            else if(X > Y)
                System.out.println("Decrescente");
            else
                System.out.println("Crescente");  
        }

        sc.close();
    }
}