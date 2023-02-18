import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n, c, m;

        n = sc.nextInt();
        c = sc.nextInt();
        m = sc.nextInt();

        int[] fc = new int[c];
        int[] fb = new int[m];
        int cont = c;

        for (int i = 0; i < c; i++) {
            fc[i] = sc.nextInt();
        }
    
        for (int i = 0; i < m; i++) {
            fb[i] = sc.nextInt();
        }
    
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < m; j++) {
                if (fb[j] == fc[i]) {
                    cont--;
                    break;
                }
            }
        }
    
        System.out.println(cont);

        sc.close();
    }

}