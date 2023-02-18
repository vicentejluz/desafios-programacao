import java.util.Scanner;

public class Main{
    public static void main(String[] args)  throws Exception{
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int cont = 1;
        int vet[] = new int[n];

        for(int i = 0; i < n; i++){
            vet[i] = sc.nextInt();
        }

        for(int i = 1; i < n; i++){
            if(vet[i] != vet[i - 1])
                cont++;
        }

        System.out.println(cont);

        sc.close();
    }
}