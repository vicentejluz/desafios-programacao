import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        boolean log;
        String frase;

        while (true) {
            frase = sc.nextLine();

            if (frase.equals("*")) {
                break;
            }

            log = true;

            for (int i = 0; i < frase.length(); i++) {
                if (frase.charAt(i) == ' ') {
                    if (frase.charAt(0) != frase.toUpperCase().charAt(i + 1)
                            && frase.charAt(0) != frase.toLowerCase().charAt(i + 1)) {
                        log = false;
                        break;
                    }
                }
            }

            if (!log)
                System.out.println("N");
            else
                System.out.println("Y");
        }

        sc.close();
    }
}