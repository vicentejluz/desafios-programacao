import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int[] c = new int[3];
        int[] f = new int[3];

        int pTotalC = 0;
        for (int i = 0; i < 3; i++) {
            c[i] = sc.nextInt();
            if (i == 0)
                c[i] *= 3;
            if (i == 1)
                pTotalC = c[0] + c[i];
        }
        int sgC = c[2];

        int pTotalF = 0;
        for (int i = 0; i < 3; i++) {
            f[i] = sc.nextInt();
            if (i == 0)
                f[i] *= 3;
            if (i == 1)
                pTotalF = f[0] + f[i];
        }
        int sgF = f[2];

        char camp;
        if (pTotalC > pTotalF)
            camp = 'C';
        else if (pTotalF > pTotalC)
            camp = 'F';
        else if (sgC > sgF)
            camp = 'C';
        else if (sgF > sgC)
            camp = 'F';
        else
            camp = '=';

        System.out.println(camp);

        sc.close();
    }
}