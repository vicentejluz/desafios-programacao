import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int senha;

        while(true){
            senha = sc.nextInt();

            if(senha == 2002){
                System.out.println("Acesso Permitido");
                break;
            }
            else{
                System.out.println("Senha Invalida");
            }
        }

        sc.close();
    }
}