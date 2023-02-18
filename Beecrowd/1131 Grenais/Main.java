import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int I, G, grenal, VI = 0, VG = 0, emp = 0, i = 0;

        do {
            I = sc.nextInt();
            G = sc.nextInt();

            System.out.println("Novo grenal (1-sim 2-nao)");
            grenal = sc.nextInt();

            if (I > G)
                VI++;
            else if (G > I)
                VG++;
            else
                emp++;

            i++;

        } while (grenal == 1);

        System.out.println(i + " grenais");
        System.out.println("Inter:" + VI);
        System.out.println("Gremio:" + VG);
        System.out.println("Empates:" + emp);

        if (VI > VG)
            System.out.println("Inter venceu mais");
        else if (VG > VI)
            System.out.println("Gremio venceu mais");
        else
            System.out.println("Nao houve vencedor");

        sc.close();
    }
}
