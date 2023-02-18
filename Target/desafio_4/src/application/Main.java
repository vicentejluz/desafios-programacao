/*
 * Escreva um programa que inverta os caracteres de um string.
 * 
 * IMPORTANTE:
 * a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser
   previamente definida no código;
 * b) Evite usar funções prontas, como, por exemplo, reverse; 
*/

package application;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        String rev = new String();

        for (int i = str.length() - 1; i >= 0; i--) {
            rev += str.charAt(i);
        }

        System.out.println(rev);

        sc.close();
    }

}