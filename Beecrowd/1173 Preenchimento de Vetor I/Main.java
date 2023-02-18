import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n[] = new int[10], v;
	
        do{
            v = sc.nextInt();
        
            n[0] = v;
        if(v < 50){
            for(int i = 1; i < 10; i++){
                n[i] = n[i - 1] * 2;
            }
            for(int i = 0; i < 10; i++){
                System.out.println("N[" + i + "] = " + n[i]);
            }
        }
        }while(v >= 50);

        sc.close();
    }
}