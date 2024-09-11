/*
 * Desafio
 *  Implemente o método update na classe Table que permita ao usuário atualizar o nome de um
 *  elemento na tabela. O usuário deve informar o ID do elemento e o novo nome. O método deve
 *  verificar se a chave (ID) existe na tabela. Se existir, o valor associado a essa chave deve
 *  ser atualizado com o novo nome. Caso contrário, exiba a mensagem "ID nao encontrado.".
 * 
 *  Após todas as atualizações, o programa deve exibir a tabela atualizada com todos os nomes.
 * 
 *  Entrada
 *      Um inteiro n representando a quantidade de atualizações a serem feitas.
 * 
 *      Seguido por n pares de entradas onde cada par contém:
 *          * Um inteiro (ID) que representa a chave do elemento na tabela.
 *          * Uma string (novo nome) que representa o novo valor a ser associado à chave.
 *
 *  Saída
 *      A lista de nomes atualizados na tabela, um abaixo do outro.
 *
 *  Exemplo 1
 *  | Entrada | Saída   |
 *  | 2       | Alice   |
 *  | 5       | Bob     |
 *  | Erica   | Charlie |
 *  | 6       | Debora  |
 *  | Fabio   | Erica   |
 *  |         | Fabio   |
 *   -------------------
 * 
 *  Exemplo 2
 *  | Entrada | Saída    |
 *  | 3       | Angela   |
 *  | 1       | Bruce    |
 *  | Angela  | Chris    |
 *  | 2       | Debora   |
 *  | Bruce   | Eduardo  |
 *  | 3       | Fernanda |
 *  | Chris   |          |
 *   --------------------
 * 
 *  Exemplo 3
 *  | Entrada | Saída    |
 *  | 4       | Alice    |
 *  | 2       | Brad     |
 *  | Brad    | Charlie  |
 *  | 3       | Derek    |
 *  | Charlie | Emma     |
 *  | 4       | Fernanda |
 *  | Derek   |          |
 *  | 5       |          |
 *  | Emma    |          |
 *   --------------------
*/

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    private Map<Integer, String> table;

    public Main() {
        this.table = new HashMap<>();
        // Inserindo dados para exemplo
        table.put(1, "Alice");
        table.put(2, "Bob");
        table.put(3, "Charlie");
        table.put(4, "Debora");
        table.put(5, "Eduardo");
        table.put(6, "Fernanda");
    }

    public void insert(int key, String value) {
        table.put(key, value);
    }

    // TODO: Implementar o método update:
    // DICA: O método update deve verificar se a chave (key) existe na tabela.
    // Se existir, atualize o valor associado a essa chave com newValue.
    // Caso contrário, exiba a mensagem "ID nao encontrado.".
    public void update(int id, String newName) {
        if (table.containsKey(id)) {
            table.replace(id, newName);
        } else {
            System.out.println("ID nao encontrado.");
        }
    }

    public void display() {
        for (String name : table.values()) {
            System.out.println(name);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Main table = new Main();

        int n = Integer.parseInt(scanner.nextLine().trim());

        for (int i = 0; i < n; i++) {
            int id = Integer.parseInt(scanner.nextLine().trim());
            String newName = scanner.nextLine().trim();
            table.update(id, newName);
        }

        table.display();
        scanner.close();
    }
}