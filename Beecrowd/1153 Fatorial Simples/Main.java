import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N, fat = 1;

        N = sc.nextInt();

        for(int i = 1; i <= N; i++){
            fat *= i;
        }

        System.out.println(fat);

        sc.close();
    }
}