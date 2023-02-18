import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int i = 1;

        for (int j = 60; j >= 0; j -= 5) {
            System.out.println("I=" + i + " J=" + j);
            i += 3;
        }

        sc.close();
    }
}