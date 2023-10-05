import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, cycle, i = 1;

        while (true) {
            n = sc.nextInt();

            if (n == -1)
                break;

            cycle = n / 2;
            System.out.println("Experiment " + (i++) + ": " + cycle + " full cycle(s)");
        }

        sc.close();
    }

}