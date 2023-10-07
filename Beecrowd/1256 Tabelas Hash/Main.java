import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int m = sc.nextInt();
            int c = sc.nextInt();

            HashTable tab = new HashTable(m);
            StringBuilder sb = new StringBuilder();

            for (int j = 0; j < c; j++) {
                int valor = sc.nextInt();
                tab.inserirValor(valor);
            }

            tab.imprimirHash(sb);
            if (i < n - 1)
                System.out.println(sb);
            else
                System.out.print(sb);
        }

        sc.close();
    }
}

class HashTable {

    private final List<LinkedList<Integer>> tab;
    private int tam;
    private int pos;

    public HashTable(int tam) {
        this.tam = tam;
        this.tab = new ArrayList<>(tam);
        inicializaLista();
    }

    private void inicializaLista() {
        for (int i = 0; i < tam; i++) {
            this.tab.add(new LinkedList<>());
        }
    }

    private int funcaoHash(int valor) {
        return valor % tam;
    }

    public void inserirValor(int valor) {
        this.pos = funcaoHash(valor);
        LinkedList<Integer> list = tab.get(pos);
        list.add(valor);
    }

    public void imprimirHash(StringBuilder sb) {
        for (int i = 0; i < tab.size(); i++) {
            sb.append(i + " -> ");
            LinkedList<Integer> hash = tab.get(i);

            if (!hash.isEmpty()) {
                for (int j = 0; j < hash.size(); j++) {
                    if (j < hash.size() - 1)
                        sb.append(hash.get(j) + " -> ");
                    else
                        sb.append(hash.get(j) + " -> \\");
                }
                sb.append("\n");
            } else
                sb.append("\\\n");
        }
    }
}