import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n;

        while (true) {
            n = sc.nextInt();

            if (n == 0)
                break;

            int[] vet = new int[n];

            for (int i = 0; i < n; i++)
                vet[i] = sc.nextInt();

            int maior = obtemMaior(vet);
            int indiceSegundoMaior = obtemIndiceSegundoMaior(vet, maior) + 1;

            System.out.println(indiceSegundoMaior);

        }

        sc.close();

    }

    public static int obtemMaior(int[] vet) {
        int maior = vet[0];

        for (int i = 0; i < vet.length; i++) {
            if (vet[i] > maior) {
                maior = vet[i];
            }
        }
        return maior;
    }

    public static int obtemIndiceSegundoMaior(int[] vet, int maior) {
        int segundoMaior = vet[0];
        int cont = 0;
        if (vet[0] == maior) {
            segundoMaior = vet[1];
            cont = 1;
        }

        for (int i = 0; i < vet.length; i++) {
            if (vet[i] > segundoMaior && vet[i] != maior) {
                segundoMaior = vet[i];
                cont = i;
            }
        }
        return cont;
    }

}
