import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int c;
        String jog1, jog2;

        c = sc.nextInt();

        while (c > 0) {
            jog1 = sc.next();
            jog2 = sc.next();

            if ((jog1.equals("tesoura") && jog2.equals("papel")) || (jog1.equals("tesoura") && jog2.equals("lagarto"))
                    ||
                    (jog1.equals("papel") && jog2.equals("pedra")) || (jog1.equals("papel") && jog2.equals("spock")) ||
                    (jog1.equals("pedra") && jog2.equals("lagarto")) || (jog1.equals("pedra") && jog2.equals("tesoura"))
                    ||
                    (jog1.equals("lagarto") && jog2.equals("spock")) || (jog1.equals("lagarto") && jog2.equals("papel"))
                    ||
                    (jog1.equals("spock") && jog2.equals("tesoura")) || (jog1.equals("spock") && jog2.equals("pedra")))
                System.out.println("rajesh");
            else if ((jog2.equals("tesoura") && jog1.equals("papel"))
                    || (jog2.equals("tesoura") && jog1.equals("lagarto")) ||
                    (jog2.equals("papel") && jog1.equals("pedra")) || (jog2.equals("papel") && jog1.equals("spock")) ||
                    (jog2.equals("pedra") && jog1.equals("lagarto")) || (jog2.equals("pedra") && jog1.equals("tesoura"))
                    ||
                    (jog2.equals("lagarto") && jog1.equals("spock")) || (jog2.equals("lagarto") && jog1.equals("papel"))
                    ||
                    (jog2.equals("spock") && jog1.equals("tesoura")) || (jog2.equals("spock") && jog1.equals("pedra")))
                System.out.println("sheldon");
            else
                System.out.println("empate");

            c--;
        }

        sc.close();
    }

}