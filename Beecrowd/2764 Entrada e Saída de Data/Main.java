import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        String[] date = sc.next().split("/");

        System.out.println(date[1] + "/" + date[0] + "/" + date[2]);
        System.out.println(date[2] + "/" + date[1] + "/" + date[0]);
        System.out.println(date[0] + "-" + date[1] + "-" + date[2]);

        sc.close();
    }
}