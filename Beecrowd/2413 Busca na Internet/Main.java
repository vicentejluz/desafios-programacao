import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int t, mut;

        t = sc.nextInt();

        mut = t * 4;

        System.out.println(mut);

        sc.close();
    }

}