/*
 * Desafio
 *  Você está trabalhando em um sistema de gerenciamento de inventário para uma empresa de tecnologia e 
 *  precisa de uma função que recebe uma lista de produtos de TI e remove quaisquer duplicados. 
 *  A lista pode conter produtos com o mesmo nome, e você precisa garantir que cada produto apareça apenas uma vez 
 *  na lista final.  Escreva uma função que receba uma lista de produtos e retorne uma nova lista com os produtos 
 *  únicos, mantendo a ordem de sua primeira ocorrência.
 * 
 *  Objetivo do Desafio
 *      Você deve completar o método main para chamar a função removerDuplicados e armazenar o resultado. 
 *      Em seguida, deve imprimir a lista de produtos únicos. A função deve ser capaz de lidar com produtos que 
 *      diferem apenas em letras maiúsculas e minúsculas, ou seja, "USB Drive" e "usb drive" 
 *      devem ser considerados duplicados.
 * 
 *  Entrada
 *      A função receberá uma lista de strings produtos onde cada string representa o nome de um produto de TI. 
 *      A lista pode conter produtos duplicados.
 * 
 *  Saída
 *      A função deve retornar uma lista de strings onde cada string representa o nome de um produto de TI, 
 *      sem duplicatas e na mesma ordem em que apareceram pela primeira vez na lista de entrada.
 *
 *  Exemplo 1
 *  | Entrada      |      Saída       |
 *  | 6            | Produtos unicos: |
 *  | USB Drive    | USB Drive        |
 *  | usb drive    | External HDD     |
 *  | External HDD | Pen Drive        |
 *  | External HDD |                  |
 *  | USB DRIVE    |                  |
 *  | Pen Drive    |                  |
 *  |--------------|------------------|
 *  | 6            | Produtos unicos: |
 *  | Printer      | Printer          |
 *  | Scanner      | Scanner          |
 *  | Speaker      | Speaker          |
 *  | Scanner      |                  |
 *  | Speaker      |                  |
 *  | Printer      |                  |
 *  |--------------|------------------|
 *  | 8            | Produtos unicos: |
 *  | Router       | Router           |
 *  | Switch       | Switch           |
 *  | Router       | Modem            |
 *  | Modem        | Printer          |
 *  | Switch       | Laptop           |
 *  | Printer      |                  |
 *  | Laptop       |                  |
 *  | Router       |                  |
 *   ---------------------------------
*/

import java.util.*;

public class Main {
    public static List<String> removerDuplicados(List<String> produtos) {
        Set<String> vistos = new HashSet<>();

        List<String> resultado = new ArrayList<>();

        for (String produto : produtos) {

            String produtoLower = produto.toLowerCase();

            if (!vistos.contains(produtoLower)) {

                resultado.add(produto);
                vistos.add(produtoLower);
            }
        }
        return resultado;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        List<String> produtos = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String produto = scanner.nextLine();
            produtos.add(produto);
        }

        // TODO: Chamar a função removerDuplicados e armazenar o resultado:
        produtos = removerDuplicados(produtos);

        System.out.println("Produtos unicos:");
        // TODO: Implemente o loop for para imprimir cada produto na lista
        // produtosUnicos:
        produtos.forEach(System.out::println);

        scanner.close();
    }
}