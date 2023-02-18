import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, maior = 0, cont = 0;

        for (int i = 1; i <= 100; i++) {
            x = sc.nextInt();
            if (i == 0) {
                maior = x;
            } else {
                if (x > maior) {
                    maior = x;
                    cont = i;
                }
            }
        }
        System.out.println(maior);
        System.out.println(cont);

        sc.close();
    }
}