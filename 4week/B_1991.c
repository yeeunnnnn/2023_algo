#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    char data; // data는 알파벳 저장하고 left와 right는 배열상의 인덱스(-65된 값)을 저장함.
    int left;
    int right;
} Node;

void makeBTreeNode(Node* newNode, char a)
{
    newNode->data = a;
    newNode->left = 0;
    newNode->right = 0;
}

void makeLC(Node* parent, char a)
{
    parent->left = a;
}

void makeRC(Node* parent, char a)
{
    parent->right = a;
}

void Preorder(Node* nodeList, int startpoint)
{
    printf("%c", nodeList[startpoint].data);
    if (nodeList[startpoint].left != 0) Preorder(nodeList, nodeList[startpoint].left);
    if (nodeList[startpoint].right != 0) Preorder(nodeList, nodeList[startpoint].right);
}

void Inorder(Node* nodeList, int startpoint)
{
    if (nodeList[startpoint].left != 0) Inorder(nodeList, nodeList[startpoint].left);
    printf("%c", nodeList[startpoint].data);
    if (nodeList[startpoint].right != 0) Inorder(nodeList, nodeList[startpoint].right);
}

void Postorder(Node* nodeList, int startpoint)
{
    if (nodeList[startpoint].left != 0) Postorder(nodeList, nodeList[startpoint].left);
    if (nodeList[startpoint].right != 0) Postorder(nodeList, nodeList[startpoint].right);
    printf("%c", nodeList[startpoint].data);
}

int main(void)
{
    int n;
    char a, b, c;

    scanf("%d", &n);
    getchar();

    Node* nodeList = (Node*)malloc(sizeof(Node) * n);

    for (int i = 0; i < n; i++) // A = 65, 배열로 나타내어 저장
    {
        scanf("%c %c %c", &a, &b, &c);
        getchar();

        makeBTreeNode(&nodeList[a - 65], a);
        if (b != '.')
            makeLC(&nodeList[a - 65], b - 65);
        if (c != '.')
            makeRC(&nodeList[a - 65], c - 65);
    }

    Preorder(nodeList, 0);
    printf("\n");
    Inorder(nodeList, 0);
    printf("\n");
    Postorder(nodeList, 0);

    // Free allocated memory
    free(nodeList);

    return 0;
}
