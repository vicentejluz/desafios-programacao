import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        for (int i = 1; i <= 9; i += 2) {
            for (int j = 7; j >= 5; j--) {
                System.out.println("I=" + i + " J=" + j);
            }
        }

        sc.close();
    }
}