import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int horaInicio, horaFinal, duracaojogo;

        horaInicio = sc.nextInt();
        horaFinal = sc.nextInt();

        if(horaInicio == horaFinal){
            duracaojogo = 24;
        }
        else if(horaFinal < horaInicio){
            duracaojogo = 24 + horaFinal - horaInicio;
        }
        else{
            duracaojogo = horaFinal - horaInicio;
        }
        
        System.out.println("O JOGO DUROU " + duracaojogo + " HORA(S)");

        sc.close();
    }
 
}