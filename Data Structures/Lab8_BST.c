#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int value) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *insertNode(struct node *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

struct node *deleteNode(struct node *root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == NULL && root->right == NULL) { // Case 1: Node with no child
            free(root);
            root = NULL;
        } else if (root->left == NULL) { // Case 2: Node with one child
            struct node *temp = root;
            root = root->right;
            free(temp);
        } else if (root->right == NULL) { // Case 2: Node with one child
            struct node *temp = root;
            root = root->left;
            free(temp);
        } else { // Case 3: Node with two children
            struct node *temp = root->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

void printTreelinear(struct node *root) {
    if (root != NULL) {
        printTreelinear(root->left);
        printf("%d ", root->data);
        printTreelinear(root->right);
    }
}

int maxHeight(struct node *root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = maxHeight(root->left);
    int rightHeight = maxHeight(root->right);

    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    } else {
        return rightHeight + 1;
    }
}

void printSpaces(int count) {
    int i;
    for (i = 0; i < count; i++) {
        printf(" ");
    }
}

void printNodes(struct node *root, int level, int indent) {
    if (root == NULL) {
        return;
    }

    //int distance = 5 * (maxHeight(root) - level);
    int distance = 5 * (maxHeight(root));
    printSpaces(indent - distance);

    printf("%d\n", root->data);

    printNodes(root->left, level + 1, indent - distance);
    printNodes(root->right, level + 1, indent + distance-20);
}

void printTree(struct node *root) {
    printNodes(root, 1, 100);
}

void printPreorder(struct node* node)
{
    if(node == NULL)
    return;
    printf("%d ",node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}
void printInorder(struct node* node)
{
    if(node  == NULL)
    return;
    printInorder(node->left);
    printf("%d ",node->data);
    printInorder(node->right);
}
void printPostorder(struct node* node)
{
    if(node == NULL)
    return;
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ",node->data);
}


int main() {

    int choice,value;
    int y = 1;
    struct node *root = NULL;
    printf("\n\n************************IMPLEMENTATION OF BST********************\n");
    root = insertNode(root, 80);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 50);
    insertNode(root, 90);
    insertNode(root, 10);
    insertNode(root, 50);
    insertNode(root, 100);
    insertNode(root, 110);
    insertNode(root, 130);
    insertNode(root, 120);
    insertNode(root, 140);
    printf("Binary search tree linear: \n");
    printTreelinear(root);
    printf("\nBinary search tree: \n");
    printTree(root);
    root = deleteNode(root, 20); // Delete node with no child
    printf("Binary search tree after deleting 20: ");
    printTreelinear(root);
    printf("\n");
    root = deleteNode(root, 30); // Delete node with one child
    printf("Binary search tree after deleting 30: ");
    printTreelinear(root);
    printf("\n");
    root = deleteNode(root, 50); // Delete node with two children
    printf("Binary search tree after deleting 50: ");
    printTreelinear(root);
    printf("\n");
    

    do
    {
    printf("\n\n************************IMPLEMENTATION OF BST********************\n");
    printf("1.Enter value\n2.Delete value\n3.Display\n4.preorder, postorder, inoder\n5.Exit\nYour choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: 
    printf("1.Enter value you want to insert: ");
    scanf("%d",&value);
    insertNode(root, value);
    break;


    case 2: 
    printf("1.Enter value you want to delete: ");
    scanf("%d",&value);
    deleteNode(root, value);
    break;


    case 3: 
    printf("Binary search tree: ");
    printTreelinear(root);
    printf("\n");

    printf("Binary search tree: \n");
    printTree(root);
    break;

    case 4: 
    printf("\nPreorder:\t");
    printPreorder(root);
    printf("\nInorder:\t");
    printInorder(root);
    printf("\nPostorder:\t");
    printPostorder(root);
    break;

    case 5: y=0;
    break;

    default:
    printf("Enter Correct value ");
    }
    }while(y==1);
    printf("\nSee you later, bye \n");
  return 0;
}

