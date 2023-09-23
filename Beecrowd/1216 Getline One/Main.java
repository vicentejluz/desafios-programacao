import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int cont = 0, dis, res = 0;
        double med;
        String nome;

        while (sc.hasNext()) {
            sc.next();
            nome = sc.nextLine();
            dis = sc.nextInt();

            res += dis;

            cont++;
        }

        med = (double) res / cont;

        System.out.printf("%.1f\n", med);

        sc.close();
    }
}