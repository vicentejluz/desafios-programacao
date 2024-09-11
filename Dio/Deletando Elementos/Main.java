/*
 * Desafio
 *  Implemente um programa que permita ao usuário remover elementos da tabela. O usuário deve
 *  informar o ID do elemento que deseja remover. O programa deve exibir os nomes restantes na
 *  tabela após a remoção.
 * 
 *  Instrução
 *       
 *      1. Completar o Método de Remoção:
 *          * Implemente o método delete para remover um elemento da tabela usando a chave (ID)
 *            fornecida.
 * 
 *  Entrada
 *      1. Um inteiro n representando a quantidade de elementos a serem removidos.
 *      2. Seguido por n IDs de elementos a serem removidos.
 * 
 *  Saída
 *      A lista de nomes restantes na tabela, um abaixo do outro.
 *
 *  Exemplo 1
 *  | Entrada | Saída    |
 *  | 2       | Alice    |
 *  | 3       | Bob      |
 *  | 6       | Paula    |
 *  |         | Gabriela |
 *   --------------------
 * 
 *  Exemplo 2
 *  | Entrada | Saída   |
 *  | 3       | Charlie |
 *  | 5       | Paula   |
 *  | 2       | Luiza   |
 *  | 1       |         |
 *   -------------------
 * 
 *  Exemplo 3
 *  | Entrada | Saída    |
 *  | 4       | Gabriela |
 *  | 1       | Luiza    |
 *  | 2       |          |
 *  | 3       |          |
 *  | 4       |          |
 *   --------------------
*/

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    private Map<Integer, String> table;

    public Main() {
        this.table = new HashMap<>();
    }

    public void insert(int key, String value) {
        table.put(key, value);
    }

    // TODO: Método para deletar um elemento da tabela usando sua chave (ID)
    public void delete(int key) {
        table.remove(key);
    }

    public void display() {
        for (String name : table.values()) {
            System.out.println(name);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Main table = new Main();

        // Inserindo dados para exemplo
        table.insert(1, "Alice");
        table.insert(2, "Bob");
        table.insert(3, "Charlie");
        table.insert(4, "Paula");
        table.insert(5, "Gabriela");
        table.insert(6, "Luiza");

        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {

            int id = scanner.nextInt();
            table.delete(id);
        }

        table.display();
        scanner.close();
    }
}