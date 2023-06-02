#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct arvore
{
    int raiz;
    struct arvore *esq;
    struct arvore *dir;
} arvore;

void busca_e_adiciona(arvore *raiz, int no, int esq, int dir)
{
    if (raiz == NULL)
        return;
    if (raiz->raiz == no)
    {
        if (esq != -1)
        {
            raiz->esq->raiz = esq;
            raiz->esq->esq = (arvore *)malloc(sizeof(arvore));
            raiz->esq->dir = (arvore *)malloc(sizeof(arvore));
        }
        if (dir != -1)
        {
            raiz->dir->raiz = dir;
            raiz->dir->esq = (arvore *)malloc(sizeof(arvore));
            raiz->dir->dir = (arvore *)malloc(sizeof(arvore));
        }
        return;
    }

    busca_e_adiciona(raiz->esq, no, esq, dir);
    busca_e_adiciona(raiz->dir, no, esq, dir);
}

int altura(arvore *raiz, int nivel)
{
    if (raiz == NULL)
        return nivel - 1;
    int esq = altura(raiz->esq, nivel + 1);
    int dir = altura(raiz->dir, nivel + 1);
    if (esq > dir)
        return esq;
    return dir;
}

int main()
{
    arvore *raiz = (arvore *)malloc(sizeof(arvore));
    int n, i, x;
    scanf("%d %d %d", &n, &i, &x);
    raiz->raiz = x;
    raiz->esq = (arvore *)malloc(sizeof(arvore));
    raiz->dir = (arvore *)malloc(sizeof(arvore));
    for (int j = 0; j < i; j++)
    {
        int no, esq, dir;
        scanf("%d %d %d", &no, &esq, &dir);
        busca_e_adiciona(raiz, no, esq, dir);
    }
    printf("%d\n", altura(raiz, 0));
}