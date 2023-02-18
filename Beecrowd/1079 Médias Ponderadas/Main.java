import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N;
        double nota1, nota2, nota3, media;

        N = sc.nextInt();

        for(int i = 0; i < N; i++){
            media = 0;
            nota1 = sc.nextDouble();
            nota2 = sc.nextDouble();
            nota3 = sc.nextDouble();

            media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

            System.out.printf("%.1f\n", media);

        }

        sc.close();
    }
}