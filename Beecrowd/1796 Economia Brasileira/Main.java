import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int q, sas, cont = 0, cont2 = 0;

        q = sc.nextInt();

        while (q != 0) {
            sas = sc.nextInt();

            if (sas == 1)
                cont++;
            else
                cont2++;
            q--;
        }

        if (cont >= cont2)
            System.out.println("N");
        else
            System.out.println("Y");

        sc.close();
    }

}