import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N, X, in = 0, out = 0;

        N = sc.nextInt();
        
        for(int i = 0; i < N; i++){
            X = sc.nextInt();
            if(X >= 10 && X <= 20)
                in++;
            else
                out++;
        }

        System.out.println(in + " in");
        System.out.println(out + " out");

        sc.close();
    }
}