/*
 * Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos
   2  valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na
   linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma
   mensagem avisando se o número informado pertence ou não a sequência.
 * 
 * IMPORTANTE:
   Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser
   previamente definido no código; 
*/

package application;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int previous = 0, next = 1;
        int fibonacci[] = new int[n];

        for (int i = 0; i < n; i++) {
            if (i < 2) {
                fibonacci[i] = previous + i;
            } else {
                fibonacci[i] = previous + next;
                previous = next;
                next = fibonacci[i];
            }
        }

        if (hasFibonacci(fibonacci, n))
            System.out.println("Valor " + n + " pertence a sequência.");
        else
            System.out.println("Valor " + n + " não pertence a sequência.");

        sc.close();
    }

    public static boolean hasFibonacci(int[] fibonacci, int n) {
        for (int i = 0; i < n; i++) {
            if (fibonacci[i] == n)
                return true;
        }
        return false;
    }

}
