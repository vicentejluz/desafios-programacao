import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N, X, Y;

        N = sc.nextInt();

        for(int i = 0; i < N; i++){
            X = sc.nextInt();
            Y = sc.nextInt();

            if(Y == 0)
                System.out.println("divisao impossivel");
            else
                System.out.printf("%.1f\n", (double) X / Y);
        }

        sc.close();
    }
}