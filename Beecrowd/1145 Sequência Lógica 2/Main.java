import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int x, y, aux;

        x = sc.nextInt();
        y = sc.nextInt();
        aux = x;
        for (int i = 1; i <= y; i++) {
            if (i < x)
                System.out.print(i + " ");
            else {
                System.out.println(i);
                x += aux;
            }
        }

        sc.close();
    }
}