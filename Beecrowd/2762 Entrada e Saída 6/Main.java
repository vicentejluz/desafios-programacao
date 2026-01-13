import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String aux = sc.next();

        int n = Integer.valueOf(aux.split("\\.")[0]);
        int num = Integer.valueOf(aux.split("\\.")[1]);

        System.out.println(num + "." + n);

        sc.close();
    }
}
