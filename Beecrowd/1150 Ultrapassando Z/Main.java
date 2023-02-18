import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, z, i, cont = 0, soma = 0;

        x = sc.nextInt();

        do {
            z = sc.nextInt();
        } while (z <= x);

        i = x;
        while (soma <= z) {
            soma += i;
            cont++;
            i++;
        }

        System.out.println(cont);

        sc.close();
    }
}