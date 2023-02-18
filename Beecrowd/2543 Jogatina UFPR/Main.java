import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, u, i, j, cont;

        while (sc.hasNext()) {
            n = sc.nextInt();
            u = sc.nextInt();
            cont = 0;
            for (int k = 0; k < n; k++) {
                i = sc.nextInt();
                j = sc.nextInt();
                if (i == u && j == 0) {
                    cont++;
                }
            }

            System.out.println(cont);
        }

        sc.close();
    }
}
