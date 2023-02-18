/*
long - inteiro de 32bits ou 64bits
while(sc.hasNext()) -> usado para  até final de arquivo (EOF)
*/ 

import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        long num1, num2;
        while(sc.hasNext()){
            num1 = sc.nextLong();
            num2 = sc.nextLong();
            System.out.println(num1 ^ num2);
        }

        sc.close();
    }
 
}