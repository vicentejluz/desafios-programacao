import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int X;

        X = sc.nextInt();

        for(int i = 1; i <= X; i++){
            if(i % 2 != 0)
                System.out.println(i);
        }

        sc.close();
    }
}