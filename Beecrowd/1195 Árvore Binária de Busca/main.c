#include <stdio.h>
#include <stdlib.h>

typedef struct arv
{
    int valor;
    struct arv *esq;
    struct arv *dir;
} arv;

arv *cria();
int vazia(arv *a);
arv *insere(arv *a, int v);
void emOrdem(arv *a);
void preOrdem(arv *a);
void posOrdem(arv *a);
int contaElementos(arv *a);
void printArv(arv *arv, int i);

int cont, tam;

int main()
{
    arv *a;
    int c, n, valor;
    a = cria();

    scanf("%d", &c);

    for (int i = 0; i < c; i++)
    {
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &valor);
            a = insere(a, valor);
        }

        printArv(a, i);

        a = (arv *)vazia(a);
    }

    return 0;
}

arv *cria()
{
    return NULL;
}

int vazia(arv *a)
{
    return (a == NULL);
}

arv *insere(arv *a, int v)
{
    if (a == NULL)
    {
        a = (arv *)malloc(sizeof(arv));
        a->valor = v;
        a->esq = a->dir = NULL;
    }
    else if (v < a->valor)
        a->esq = insere(a->esq, v);
    else
        a->dir = insere(a->dir, v);
    return a;
}

void emOrdem(arv *a)
{
    if (a != NULL)
    {
        emOrdem(a->esq);
        if (cont < tam - 1)
            printf("%d ", a->valor);
        else
            printf("%d", a->valor);
        cont++;
        emOrdem(a->dir);
    }
}

void preOrdem(arv *a)
{
    if (a != NULL)
    {
        if (cont < tam - 1)
            printf("%d ", a->valor);
        else
            printf("%d", a->valor);
        cont++;
        preOrdem(a->esq);
        preOrdem(a->dir);
    }
}

void posOrdem(arv *a)
{
    if (a != NULL)
    {
        posOrdem(a->esq);
        posOrdem(a->dir);
        if (cont < tam - 1)
            printf("%d ", a->valor);
        else
            printf("%d", a->valor);
        cont++;
    }
}

int contaElementos(arv *a)
{
    if (a == NULL)
        return 0;
    return 1 + contaElementos(a->esq) + contaElementos(a->dir);
}

void printArv(arv *arv, int i)
{
    tam = contaElementos(arv);
    cont = 0;
    printf("Case %d:\n", i + 1);
    printf("Pre.: ");
    preOrdem(arv);
    printf("\n");

    cont = 0;
    printf("In..: ");
    emOrdem(arv);
    printf("\n");

    cont = 0;
    printf("Post: ");
    posOrdem(arv);
    printf("\n\n");
}