import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);

        int n, s, min, sum;

        n = sc.nextInt();
        s = sc.nextInt();

        min = s;
        sum = s;

        for(int i = 0; i < n; i++){
            s = sc.nextInt();
            sum += s;
            if(sum < min)
                min = sum;
        }

        System.out.println(min);

        sc.close();
    }
}
