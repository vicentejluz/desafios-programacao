import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        DecimalFormat df = new DecimalFormat("0.0");

        double n1, n2, n3, n4, media, notaExame, mediaExame;

        n1 = sc.nextDouble();
        n2 = sc.nextDouble();
        n3 = sc.nextDouble();
        n4 = sc.nextDouble();

        media = (2 * n1 + 3 * n2 + 4 * n3 + 1 * n4) / (2 + 3 + 4 + 1);

        if (media < 5.0) {
            System.out.println("Media: " + df.format(media));
            System.out.println("Aluno reprovado.");
        } else if (media <= 6.9) {
            notaExame = sc.nextDouble();
            System.out.println("Media: " + df.format(media));
            System.out.println("Aluno em exame.");
            mediaExame = (media + notaExame) / 2;
            System.out.println("Nota do exame: " + df.format(notaExame));
            if (mediaExame < 5.0) {
                System.out.println("Aluno reprovado.");
                System.out.println("Media final: " + df.format(mediaExame));
            } else {
                System.out.println("Aluno aprovado.");
                System.out.println("Media final: " + df.format(mediaExame));
            }
        } else {
            System.out.println("Media: " + df.format(media));
            System.out.println("Aluno aprovado.");
        }

        sc.close();
    }
}