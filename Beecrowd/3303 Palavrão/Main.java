import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        String palav;

        palav = sc.next();

        if (palav.length() >= 10)
            System.out.println("palavrao");
        else
            System.out.println("palavrinha");

        sc.close();
    }

}