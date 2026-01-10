/*
 * Desafio
 *  Você está desenvolvendo um sistema de inventário para uma loja. O sistema precisa filtrar produtos por faixa de
 *  preço. Cada produto tem um nome, *  categoria e preço. Crie um programa que leia os dados dos produtos e
 *  retorne a lista de produtos dentro de uma faixa de preço específica.
 * 
 *  Entrada
 *      1. Um número inteiro n representando a quantidade de produtos.
 *      2. Para cada produto, serão fornecidos:
 *          nome (uma string representando o nome do produto)
 *          categoria (uma string representando a categoria do produto)
 *          preco (um número decimal representando o preço do produto)
 *      3. Dois números decimais preco_min e preco_max representando a faixa de preço.
 * 
 *  Saída
 *      String contendo todos os produtos dentro da faixa de preço, cada um em uma linha no formato: "Nome: Preco"
 *
 *  Exemplo 1
 *  | Entrada     |               Saída               |
 *  | 2           |                                   |
 *  | Roteador    |                                   |
 *  | Rede        |                                   |
 *  | 250.00      |                                   |
 *  | Switch      | Nome: Roteador - Preco: 250.00    |
 *  | Rede        |                                   |
 *  | 400.00      |                                   |
 *  | 100.00      |                                   |
 *  | 300.00      |                                   |
 *  |-------------|-----------------------------------|
 *  | 3           |                                   |
 *  | Teclado     |                                   |
 *  | Rede        |                                   |
 *  | Periferico  |                                   |
 *  | 150.00      |                                   |
 *  | Mouse       |                                   |
 *  | Periferico  | Nome: Teclado - Preco: 150.00     |
 *  | 80.00       |                                   |
 *  | Monitor     |                                   |
 *  | Periferico  |                                   |
 *  | 900.00      |                                   |
 *  | 100.00      |                                   |
 *  | 200.00      |                                   |
 *  |-------------|-----------------------------------|
 *  | 4           |                                   |
 *  | Notebook    |                                   |
 *  | Computador  |                                   |
 *  | 4500.00     |                                   |
 *  | Desktop     |                                   |
 *  | Computador  |                                   |
 *  | 3000.00     |                                   |
 *  | Tablet      | Nome: Desktop - Preco: 3000.00    |
 *  | Dispositivo | Nome: Smartphone - Preco: 3500.00 |
 *  | 2000.00     |                                   |
 *  | Smartphone  |                                   |
 *  | Dispositivo |                                   |
 *  | 3500.00     |                                   |
 *  | 2500.00     |                                   |
 *  | 4000.00     |                                   |
 *   -------------------------------------------------
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Le a quantidade de produtos
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline

        // Lista para armazenar os produtos
        List<Produto> produtos = new ArrayList<>();

        // Le os dados dos produtos
        for (int i = 0; i < n; i++) {
            String nome = scanner.nextLine();
            String categoria = scanner.nextLine();
            double preco = scanner.nextDouble();
            scanner.nextLine(); // Consume the newline
            produtos.add(new Produto(nome, categoria, preco));
        }

        // Le a faixa de preco
        double precoMin = scanner.nextDouble();
        double precoMax = scanner.nextDouble();

        // TODO: Filtre os produtos pela faixa de preco usando Streams:
        List<Produto> produtosFiltrados = produtos.stream().filter(p -> p.preco > precoMin && p.preco < precoMax)
                .collect(Collectors.toList());

        for (Produto p : produtosFiltrados) {
            System.out.printf("Nome: %s - Preco: %.2f\n", p.nome, p.preco);
        }

        scanner.close();
    }
}

class Produto {
    String nome;
    String categoria;
    double preco;

    Produto(String nome, String categoria, double preco) {
        this.nome = nome;
        this.categoria = categoria;
        this.preco = preco;
    }
}