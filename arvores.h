/*
GRUPO:
    - Lucas Lopes Baroni 
    - Renan Catini Amaral 
*/

#ifndef _H_ARVORES
#define _H_ARVORES

/* Estrutura que representa o nó da árvore
binária de busca não balanceada. */
typedef struct _nodef{
    int value;
    struct _nodef *left;
    struct _nodef *right;
} no_def;

/* Estrutura que representa o nó da árvore
binária de busca do tipo AVL. */
typedef struct _noavl{
    int value;
    int height;
    struct _noavl *left;
    struct _noavl *right;
} no_avl;

double arvore_binaria(int instancia_num);
double arvore_balanceada(int instancia_num);

#endif // _H_ARVORES
