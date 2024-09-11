/*
 * Desafio
 *  Implemente um programa onde o usuário informa a quantidade de elementos que deseja inserir em
 *  uma tabela. Em seguida, o usuário deve inserir o ID e o nome de cada elemento. A tabela deve
 *  armazenar esses elementos e, ao final, o programa deve exibir todos os nomes armazenados na
 *  tabela, um abaixo do outro.
 * 
 *  Instrução
 *       
 *      1. Implementar o Método insert
 *          * Você deve completar o método insert que insere um par (ID, nome) na tabela.
 *          * Utilize o método put do HashMap para adicionar o par chave-valor ao mapa.
 * 
 *  Entrada
 *      1. Um inteiro n representando a quantidade de elementos a serem inseridos.
 *      2. Seguido por n pares de entradas onde cada par contém um inteiro (ID) e uma string
 *         (nome).
 *
 *  Saída
 *      A lista de nomes armazenados na tabela, um abaixo do outro.
 *
 *  Exemplo 1
 *  | Entrada | Saída  |
 *  | 2       | Anne   |
 *  | 1       | Marcos |
 *  | Anne    |        |
 *  | 2       |        |
 *  | Marcos  |        |
 *   ------------------
 * 
 *  Exemplo 2
 *  | Entrada | Saída   |
 *  | 3       | Luiz    |
 *  | 1       | Mariana |
 *  | Luiz    | Carlos  |
 *  | 2       |         |
 *  | Mariana |         |
 *  | 3       |         |
 *  | Carlos  |         |
 *   -------------------
 * 
 *  Exemplo 3
 *  | Entrada | Saída |
 *  | 4       | Bob   |
 *  | 1       | Maria |
 *  | Bob     | Yule  |
 *  | 2       | Sara  |
 *  | Maria   |       |
 *  | 3       |       |
 *  | Yule    |       |
 *  | 4       |       |
 *  | Sara    |       |
 *   -----------------
*/

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    private Map<Integer, String> table;

    public Main() {
        this.table = new HashMap<>();
    }

    // TODO: Implemente o método insert para adicionar elementos à tabela:
    public void insert(int id, String name) {
        table.put(id, name);
    }

    public void display() {
        for (String name : table.values()) {
            System.out.println(name);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Main table = new Main();

        int n = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < n; i++) {

            int id = scanner.nextInt();
            scanner.nextLine();

            String name = scanner.nextLine();
            table.insert(id, name);
        }

        table.display();
        scanner.close();
    }
}