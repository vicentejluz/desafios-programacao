import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N;

        N = sc.nextInt();

        for(int i = 1; i <= N; i++){
            System.out.println(i + " " + (int) Math.pow(i, 2) + " " + (int) Math.pow(i, 3));
        }

        sc.close();
    }
}
