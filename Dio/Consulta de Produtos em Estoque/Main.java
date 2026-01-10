/*
 * Desafio
 *  Você está desenvolvendo um sistema básico de gerenciamento de inventário para uma loja. No sistema, os produtos
 *  e suas quantidades são armazenados em um HashMap. Você precisa criar uma função que, dado o nome de um produto
 *  digitado pelo usuário, verifique a quantidade disponível em estoque e retorne uma mensagem apropriada.
 * 
 *  A função deve:
 *     1. Receber o nome de um produto do usuário.
 *     2. Consultar um HashMap de produtos com suas quantidades.
 *     3. Se o produto estiver no estoque e a quantidade for maior que zero, retornar "Produto disponivel: X em estoque.", onde, 
 *      X é a quantidade em estoque.
 *     4. Se o produto estiver no estoque, mas a quantidade for zero, retornar "Produto indisponivel.".
 *     5. Se o produto não estiver no estoque, retornar "Produto nao encontrado.".
 * 
 *  Entrada
 *      String: Nome do produto.
 * 
 *  Saída
 *      A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. 
 *      Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.
 *
 *  Exemplo 1
 *  | Entrada  |              Saída                 |
 *  | Switch   | Produto disponivel: 10 em estoque. |
 *  | Servidor | Produto disponivel: 5 em estoque.  |
 *  | Monitor  | Produto nao encontrado.            |
 *   -----------------------------------------------
*/

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    // Map de produtos com suas quantidades
    private static final Map<String, Integer> produtosEstoque = new HashMap<>();

    static {
        // Inicializando o estoque com alguns produtos
        produtosEstoque.put("Switch", 10);
        produtosEstoque.put("Roteador", 0);
        produtosEstoque.put("Teclado", 25);
        produtosEstoque.put("Mouse", 10);
        produtosEstoque.put("Servidor", 5);
    }

    public static String consultarProduto(String nomeProduto) {
        // TODO: Verifique se o produto está no estoque:
        // 1. Cheque se o produto está presente no HashMap 'produtosEstoque'.
        // 2. Se estiver, verifique se a quantidade é maior que zero e retorne "Produto
        // disponivel: X em estoque."
        // 3. Se a quantidade for zero, retorne "Produto indisponivel: X em estoque."
        // 4. Se o produto não estiver presente no HashMap, retorne "Produto nao
        // encontrado."
        if (produtosEstoque.containsKey(nomeProduto)) {
            int qtd = produtosEstoque.get(nomeProduto).intValue();
            if (qtd > 0) {
                return "Produto disponivel: " + qtd + " em estoque.";
            } else {
                return "Produto indisponivel: " + qtd + " em estoque.";
            }
        }

        return "Produto nao encontrado.";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String nomeProduto = scanner.nextLine().trim();

        // Consultando o produto e exibindo o resultado
        String resultado = consultarProduto(nomeProduto);
        System.out.println(resultado);

        scanner.close();
    }
}