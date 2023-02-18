import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int X, Y, menor, maior, soma = 0;

        X = sc.nextInt();
        Y = sc.nextInt();

        if(X >= Y){
            maior = X;
            menor = Y;
        }
        else{
            maior = Y;
            menor = X;
        }

        for(int i = menor + 1; i < maior; i++){
            if(i % 2 != 0)
                soma += i;
        }

        System.out.println(soma);

        sc.close();
    }
}