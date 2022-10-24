# include <stdio.h>
# include <stdlib.h>

typedef struct node
{
    int number;
    struct node* right;
    struct node* left;
}
node;
void trees(node* a);
int main(void)
{
    node* tree = NULL;
    node* n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n -> number = 2;
    n -> left = NULL;
    n -> right = NULL;
    tree = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n -> number = 1;
    n -> left = NULL;
    n -> right = NULL;
    tree->left = n;

    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n -> number = 3;
    n -> left = NULL;
    n -> right = NULL;
    tree -> right = n;

    trees(tree);
}



void trees(node* a)
{
    if (a == NULL)
    {
        return;
    }
    trees(a -> left);
    printf("%i\n", a -> number);
    trees(a -> right);
}