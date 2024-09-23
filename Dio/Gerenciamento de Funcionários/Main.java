/*
 * Desafio
 *  Você está desenvolvendo um sistema de banco de dados para gerenciar funcionários de uma
 *  empresa. Cada funcionário tem um ID, nome e cargo. Crie um programa que adicione funcionários
 *  a uma "tabela" (lista) e liste todos os funcionários ordenados pelo ID.
 * 
 *  Entrada
 *      1. Um número inteiro n representando a quantidade de funcionários.
 *      2. Para cada funcionário, serão fornecidos dois dados:
 *          * nome (uma string representando o nome do funcionário)
 *          * cargo (uma string representando o cargo do funcionário)
 *
 *  Saída
 *      String contendo todos os funcionários listados em ordem crescente de ID, cada um em uma
 *      linha no formato: "ID: Nome - Cargo"
 *
 *  Exemplo 1
 *  |    Entrada     |            Saída            |
 *  | 2              | 1: Mariana - Desenvolvedora |
 *  | Mariana        | 2: Samuel - Analista        |
 *  | Desenvolvedora |                             |
 *  | Samuel         |                             |
 *  | Analista       |                             |
 *   ----------------------------------------------
 * 
 *  Exemplo 2
 *  |    Entrada    |           Saída           |
 *  | 3             | 1: Simone - Gerente       |
 *  | Simone        | 2: Victor - Desenvolvedor |
 *  | Gerente       | 3: Ana - Analista         |
 *  | Victor        |                           |
 *  | Desenvolvedor |                           |
 *  | Ana           |                           |
 *  | Analista      |                           |
 *   -------------------------------------------
 * 
 *  Exemplo 3
 *  |   Entrada    |           Saída            |
 *  | 3            | 1: Patricia - Coordenadora |
 *  | Patricia     | 2: Fabio - Arquiteto       |
 *  | Coordenadora | 3: Marcelo - Gerente       |
 *  | Fabio        |                            |
 *  | Arquiteto    |                            |
 *  | Marcelo      |                            |
 *  | Gerente      |                            |
 *   -------------------------------------------
*/

import java.util.*;

public class Main {
    static class Funcionario {
        int id;
        String nome;
        String cargo;

        Funcionario(int id, String nome, String cargo) {
            this.id = id;
            this.nome = nome;
            this.cargo = cargo;
        }

        @Override
        public String toString() {
            return id + ": " + nome + " - " + cargo;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Funcionario> funcionarios = new ArrayList<>();

        int n = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < n; i++) {

            String nome = scanner.nextLine();
            String cargo = scanner.nextLine();

            // TODO: Adicione funcionários à lista 'funcionarios':
            funcionarios.add(new Funcionario(i + 1, nome, cargo));

        }

        Collections.sort(funcionarios, Comparator.comparingInt(f -> f.id));
        for (Funcionario f : funcionarios) {
            System.out.println(f);
        }

        scanner.close();
    }
}