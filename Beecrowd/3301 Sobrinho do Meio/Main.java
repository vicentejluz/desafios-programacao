import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int h, z, l;

        h = sc.nextInt();
        z = sc.nextInt();
        l = sc.nextInt();

        if ((h > z && h < l) || (h < z && h > l))
            System.out.println("huguinho");
        else if ((z > h && z < l) || (z < h && z > l))
            System.out.println("zezinho");
        else
            System.out.println("luisinho");

        sc.close();
    }

}