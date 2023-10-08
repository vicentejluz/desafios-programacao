#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

typedef struct Lista
{
    No *ini;
} Lista;

void criar_lista(Lista *list);
void inserir_lista(Lista *list, int valor);
void imprimir_lista(Lista *list);
void criar_tabela(Lista tab[]);
int funcao_hash(int valor);
void inserir_tabela(Lista tab[], int valor);
void imprimir_tabela(Lista tab[]);

int tam;

int main()
{
    int n, m, c, valor;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &m, &c);
        tam = m;
        Lista tab[tam];

        criar_tabela(tab);

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &valor);
            inserir_tabela(tab, valor);
        }

        if (i > 0)
            printf("\n");
        imprimir_tabela(tab);
    }

    return 0;
}

void criar_lista(Lista *list)
{
    list->ini = NULL;
}

void inserir_lista(Lista *list, int valor)
{
    No *no = (No *)malloc(sizeof(No));
    no->valor = valor;
    no->prox = NULL;

    if (list->ini == NULL)
    {
        list->ini = no;
    }
    else
    {
        No *aux = list->ini;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = no;
    }
}

void imprimir_lista(Lista *list)
{
    No *aux = list->ini;
    while (aux)
    {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("\\");
}

void criar_tabela(Lista tab[])
{
    for (int i = 0; i < tam; i++)
    {
        criar_lista(&tab[i]);
    }
}

int funcao_hash(int valor)
{
    return valor % tam;
}

void inserir_tabela(Lista tab[], int valor)
{
    int pos = funcao_hash(valor);
    inserir_lista(&tab[pos], valor);
}

void imprimir_tabela(Lista tab[])
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d -> ", i);
        imprimir_lista(&tab[i]);
        printf("\n");
    }
}
