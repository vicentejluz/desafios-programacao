import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        double preco, contPreco = 0D, mediaPreco, mediaKiloDia;
        int n = sc.nextInt();

        String[] frutas = new String[n];
        int[] contKilos = new int[n];
        int cont = 0;

        for (int i = 0; i < n; i++) {
            preco = sc.nextDouble();
            sc.next();
            frutas[i] = sc.nextLine();

            contPreco += preco;

            contKilos[i] = 1;

            for (int j = 0; j < frutas[i].length(); j++) {
                if (frutas[i].charAt(j) == ' ') {
                    contKilos[i]++;
                }
            }
            cont += contKilos[i];
            System.out.println("day " + (i + 1) + ": " + contKilos[i] + " kg");
        }

        mediaPreco = contPreco / n;

        mediaKiloDia = (double) cont / n;

        System.out.printf("%.2f kg by day\n", mediaKiloDia);
        System.out.printf("R$ %.2f by day\n", mediaPreco);

        sc.close();
    }
}