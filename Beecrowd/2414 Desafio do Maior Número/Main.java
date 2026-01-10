import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        List<Integer> arr = new ArrayList<>();

        while (true) {
            int temp = sc.nextInt();

            if (temp == 0)
                break;

            arr.add(temp);
        }

        int maior = arr.get(0);
        for (int i = 0; i < arr.size(); i++) {
            if (maior < arr.get(i)) {
                maior = arr.get(i);
            }
        }

        System.out.println(maior);

        sc.close();
    }

}