#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data)
{
    struct Node* node = new struct Node();

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void printPostOrder(struct Node* node)
{
    if (node == NULL)
    {
        return;
    }

    printPostOrder(node->left);
    printPostOrder(node->right);

    cout << node->data << " ";
}

void printInOrder(struct Node* node)
{
    if (node == NULL)
    {
        return;
    }

    printInOrder(node->left);

    cout << node->data << " ";

    printInOrder(node->right);
}

void printPreOrder(struct Node* node)
{
    if (node == NULL)
    {
        return;
    }

    cout << node->data << " ";

    printPreOrder(node->left);
    printPreOrder(node->right);
}

int main()
{
    cout << "-----\nLearn c++ trees #1\n-----\n" << endl;

    struct Node* root = createNode(1);
    root->right = createNode(3);
    root->left = createNode(2);
    root->left->right = createNode(5);
    root->left->left = createNode(4);

    // printPostOrder(root);
    // printInOrder(root);
    printPreOrder(root);

    cout << "\n\n----- END -----" << endl;

    return 0;
}
