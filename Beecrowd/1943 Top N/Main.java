import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int k;

        k = sc.nextInt();

        if (k == 1)
            System.out.println("Top 1");
        else if (k <= 3)
            System.out.println("Top 3");
        else if (k <= 5)
            System.out.println("Top 5");
        else if (k <= 10)
            System.out.println("Top 10");
        else if (k <= 25)
            System.out.println("Top 25");
        else if (k <= 50)
            System.out.println("Top 50");
        else
            System.out.println("Top 100");

        sc.close();
    }

}