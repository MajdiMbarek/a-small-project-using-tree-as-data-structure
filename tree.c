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
int search(node* tree, int number);

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
    search(tree,3);
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
// if you want search in tree look at this :
int search(node* tree, int number)
{
    if (tree == NULL)
    {
        return 1;
    }
    else if (number < tree->number)
    {
        // go left using recursion
        printf("go left\n");
        return search(tree->left,number);
    }
    else if (number > tree->number)
    {
        // go right using recursion
        printf("go right\n");
        return search(tree->right,number);
    }
    else
    {
        printf("found\n");
        return 0;
    }
}