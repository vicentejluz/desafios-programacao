import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, a, b, c, d, e;
        int cont, posMenor;

        while (true) {
            n = sc.nextInt();

            if (n == 0)
                break;

            for (int i = 0; i < n; i++) {
                cont = 0;
                a = sc.nextInt();
                b = sc.nextInt();
                c = sc.nextInt();
                d = sc.nextInt();
                e = sc.nextInt();
                if (a > 127 && b > 127 && c > 127 && d > 127 && e > 127)
                    cont = 2;
                if (a <= 127)
                    cont++;
                if (b <= 127)
                    cont++;
                if (c <= 127)
                    cont++;
                if (d <= 127)
                    cont++;
                if (e <= 127)
                    cont++;

                if (cont > 1)
                    System.out.println("*");
                else {
                    posMenor = obtemPosMenor(a, b, c, d, e);
                    if (posMenor == 0)
                        System.out.println("A");
                    else if (posMenor == 1)
                        System.out.println("B");
                    else if (posMenor == 2)
                        System.out.println("C");
                    else if (posMenor == 3)
                        System.out.println("D");
                    else if (posMenor == 4)
                        System.out.println("E");
                }
            }
        }

        sc.close();
    }

    static int obtemPosMenor(int a, int b, int c, int d, int e) {
        int v[] = { a, b, c, d, e };

        int menor = v[0], pos = 0;

        for (int i = 0; i < 5; i++) {
            if (v[i] < menor) {
                menor = v[i];
                pos = i;
            }
        }
        return pos;
    }
}
