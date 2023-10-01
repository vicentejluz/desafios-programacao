import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static int cont;

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int c, n, valor;

        c = sc.nextInt();

        for (int i = 0; i < c; i++) {
            n = sc.nextInt();
            ArvoreBinaria arv = new ArvoreBinaria();
            StringBuilder preOrdem = new StringBuilder();
            StringBuilder inOrdem = new StringBuilder();
            StringBuilder posOrdem = new StringBuilder();

            for (int j = 0; j < n; j++) {
                valor = sc.nextInt();
                arv.inserir(valor);
            }

            System.out.println("Case " + (i + 1) + ":");
            System.out.print("Pre.: ");
            arv.preOrdem(preOrdem);
            System.out.println(preOrdem);

            System.out.print("In..: ");
            arv.inOrdem(inOrdem);
            System.out.println(inOrdem);

            System.out.print("Post: ");
            arv.posOrdem(posOrdem);
            System.out.println(posOrdem);
            System.out.println();
        }

        sc.close();
    }

}

class No {
    private Integer conteudo;
    private No noEsq;
    private No noDir;

    public No() {
    }

    public No(Integer conteudo) {
        this.conteudo = conteudo;
        noEsq = noDir = null;
    }

    public Integer getConteudo() {
        return conteudo;
    }

    public void setConteudo(Integer conteudo) {
        this.conteudo = conteudo;
    }

    public No getNoEsq() {
        return noEsq;
    }

    public void setNoEsq(No noEsq) {
        this.noEsq = noEsq;
    }

    public No getNoDir() {
        return noDir;
    }

    public void setNoDir(No noDir) {
        this.noDir = noDir;
    }
}

class ArvoreBinaria {
    private No raiz;
    private int tam;

    public ArvoreBinaria() {
        raiz = null;
        tam = 0;
    }

    public void inserir(int conteudo) {
        No novoNo = new No(conteudo);

        raiz = inserir(raiz, novoNo);
        tam++;
    }

    private No inserir(No atual, No novoNo) {
        if (atual == null) {
            return novoNo;
        } else if (novoNo.getConteudo().compareTo(atual.getConteudo()) < 0) {
            atual.setNoEsq(inserir(atual.getNoEsq(), novoNo));
        } else {
            atual.setNoDir(inserir(atual.getNoDir(), novoNo));
        }
        return atual;
    }

    public void preOrdem(StringBuilder sb) {
        Main.cont = 0;
        preOrdem(this.raiz, sb);
    }

    private void preOrdem(No atual, StringBuilder sb) {
        if (atual != null) {
            if (Main.cont < tam - 1)
                sb.append(atual.getConteudo()).append(" ");
            else
                sb.append(atual.getConteudo());
            Main.cont++;
            preOrdem(atual.getNoEsq(), sb);
            preOrdem(atual.getNoDir(), sb);
        }
    }

    public void inOrdem(StringBuilder sb) {
        Main.cont = 0;
        inOrdem(this.raiz, sb);
    }

    private void inOrdem(No atual, StringBuilder sb) {
        if (atual != null) {
            inOrdem(atual.getNoEsq(), sb);
            if (Main.cont < tam - 1)
                sb.append(atual.getConteudo()).append(" ");
            else
                sb.append(atual.getConteudo());
            Main.cont++;
            inOrdem(atual.getNoDir(), sb);
        }
    }

    public void posOrdem(StringBuilder sb) {
        Main.cont = 0;
        posOrdem(this.raiz, sb);
    }

    private void posOrdem(No atual, StringBuilder sb) {
        if (atual != null) {
            posOrdem(atual.getNoEsq(), sb);
            posOrdem(atual.getNoDir(), sb);
            if (Main.cont < tam - 1)
                sb.append(atual.getConteudo()).append(" ");
            else
                sb.append(atual.getConteudo());
            Main.cont++;
        }
    }
}