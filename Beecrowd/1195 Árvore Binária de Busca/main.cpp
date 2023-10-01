#include <iostream>

using namespace std;

int cont, tam;

class No
{
private:
    No *esq;
    No *dir;
    int valor;

public:
    No(int valor)
    {
        this->valor = valor;
        esq = NULL;
        dir = NULL;
    }

    int getValor()
    {
        return valor;
    }

    No *getEsq()
    {
        return esq;
    }

    No *getDir()
    {
        return dir;
    }

    void setEsq(No *no)
    {
        esq = no;
    }

    void setDir(No *no)
    {
        dir = no;
    }
};

class Arvore
{
private:
    No *raiz;

public:
    Arvore()
    {
        raiz = NULL;
    }

    void inserir(int valor)
    {
        if (raiz == NULL)
        {
            raiz = new No(valor);
        }
        else
        {
            inserirAux(raiz, valor);
        }
    }

    No *getRaiz()
    {
        return raiz;
    }

    void inOrdem(No *no)
    {
        if (no != NULL)
        {
            inOrdem(no->getEsq());
            if (cont < tam - 1)
                cout << no->getValor() << " ";
            else
                cout << no->getValor();
            cont++;
            inOrdem(no->getDir());
        }
    }

    void preOrdem(No *no)
    {
        if (no != NULL)
        {
            if (cont < tam - 1)
                cout << no->getValor() << " ";
            else
                cout << no->getValor();
            cont++;
            preOrdem(no->getEsq());
            preOrdem(no->getDir());
        }
    }

    void posOrdem(No *no)
    {
        if (no != NULL)
        {
            posOrdem(no->getEsq());
            posOrdem(no->getDir());
            if (cont < tam - 1)
                cout << no->getValor() << " ";
            else
                cout << no->getValor();
            cont++;
        }
    }

    int contaElementos(No *no)
    {
        if (no == NULL)
            return 0;
        return 1 + contaElementos(no->getEsq()) + contaElementos(no->getDir());
    }

private:
    void inserirAux(No *no, int valor)
    {
        if (valor < no->getValor())
        {
            if (no->getEsq() == NULL)
            {
                No *novo_no = new No(valor);
                no->setEsq(novo_no);
            }
            else
            {
                inserirAux(no->getEsq(), valor);
            }
        }
        else if (valor > no->getValor())
        {
            if (no->getDir() == NULL)
            {
                No *novo_no = new No(valor);
                no->setDir(novo_no);
            }
            else
            {
                inserirAux(no->getDir(), valor);
            }
        }
    }
};

int main()
{
    int c, n, valor;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> n;
        Arvore arv = Arvore();
        for (int i = 0; i < n; i++)
        {
            cin >> valor;
            arv.inserir(valor);
        }

        tam = arv.contaElementos(arv.getRaiz());
        cont = 0;
        cout << "Case " << i + 1 << ":" << endl;
        cout << "Pre.: ";
        arv.preOrdem(arv.getRaiz());
        cout << endl;

        cont = 0;
        cout << "In..: ";
        arv.inOrdem(arv.getRaiz());
        cout << endl;

        cont = 0;
        cout << "Post: ";
        arv.posOrdem(arv.getRaiz());
        cout << endl
             << endl;
    }

    return 0;
}