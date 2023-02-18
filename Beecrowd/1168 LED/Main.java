import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n, k = 0, soma;
        int[] vI = new int[101];
        String v;

        n = sc.nextInt();

        do {
            v = sc.next();
            soma = 0;
            for (int i = 0; i < v.length(); i++) {
                vI[i] = v.charAt(i) - '0';

                if (vI[i] == 1)
                    soma += 2;
                else if (vI[i] == 7)
                    soma += 3;
                else if (vI[i] == 4)
                    soma += 4;
                else if (vI[i] == 2 || vI[i] == 3 || vI[i] == 5)
                    soma += 5;
                else if (vI[i] == 6 || vI[i] == 9 || vI[i] == 0)
                    soma += 6;
                else
                    soma += 7;
            }
            System.out.println(soma + " leds");
            k++;
        } while (n > k);
        sc.close();
    }
}