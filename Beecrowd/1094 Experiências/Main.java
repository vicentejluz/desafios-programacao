import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, quantia, somaC = 0, somaR = 0, somaS = 0, totalCobaia;
        double porC, porR, porS;
        char tipo;

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            quantia = sc.nextInt();
            tipo = sc.next().charAt(0);

            switch (tipo) {
                case 'C':
                    somaC += quantia;
                    break;
                case 'R':
                    somaR += quantia;
                    break;
                case 'S':
                    somaS += quantia;
            }
        }

        totalCobaia = somaC + somaR + somaS;
        porC = 100.0 * somaC / totalCobaia;
        porR = 100.0 * somaR / totalCobaia;
        porS = 100.0 * somaS / totalCobaia;

        System.out.println("Total: " + totalCobaia + " cobaias");
        System.out.println("Total de coelhos: " + somaC);
        System.out.println("Total de ratos: " + somaR);
        System.out.println("Total de sapos: " + somaS);
        System.out.printf("Percentual de coelhos: %.2f %%\n", porC);
        System.out.printf("Percentual de ratos: %.2f %%\n", porR);
        System.out.printf("Percentual de sapos: %.2f %%\n", porS);

        sc.close();
    }
}