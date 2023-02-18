import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int x, y, z, menor = 0, meio = 0, maior = 0;

        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();

        if (x < y && x < z)
            menor = x;
        else if (x > y && x > z)
            maior = x;
        else
            meio = x;

        if (y < x && y < z)
            menor = y;
        else if (y > x && y > z)
            maior = y;
        else
            meio = y;

        if (z < x && z < y)
            menor = z;
        else if (z > x && z > y)
            maior = z;
        else
            meio = z;

        System.out.println(menor + "\n" + meio + "\n" + maior + "\n");
        System.out.println(x + "\n" + y + "\n" + z);

        sc.close();
    }

}