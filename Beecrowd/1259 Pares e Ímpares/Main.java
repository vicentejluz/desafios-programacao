import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int vezes, n;

        vezes = sc.nextInt();

        List<Integer> vP = new ArrayList<>();
        List<Integer> vI = new ArrayList<>();

        for (int i = 0; i < vezes; i++) {
            n = sc.nextInt();
            if (n % 2 == 0)
                vP.add(n);
            else
                vI.add(n);
        }
        Collections.sort(vP);
        for (int vet : vP)
            System.out.println(vet);

        Collections.sort(vI, Collections.reverseOrder());
        for (int vet : vI)
            System.out.println(vet);

        sc.close();
    }

}