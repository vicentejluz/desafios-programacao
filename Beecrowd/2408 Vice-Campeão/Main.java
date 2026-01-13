import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int[] n = new int[3];

        int maior = Integer.MIN_VALUE;
        for (int i = 0; i < 3; i++) {
            n[i] = sc.nextInt();
            if (n[i] > maior)
                maior = n[i];
        }

        int vCamp = Integer.MIN_VALUE;
        for (int i = 0; i < 3; i++) {
            if (vCamp < n[i] && n[i] != maior)
                vCamp = n[i];
        }

        System.out.println(vCamp);

        sc.close();
    }
}