#include<stdio.h>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* setNode(int data)
{
    Node* tempNode = new Node;
    tempNode->data = data;
    tempNode->left = NULL;
    tempNode->right = NULL;

    return tempNode;
}

void InOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout<<root->data<<", ";
    InOrder(root->right);
}

int main()
{
    Node* root = setNode(1);
    root->left = setNode(2);
    root->right = setNode(3);
    root->left->left = setNode(4);
    root->left->right = setNode(5);

    InOrder(root);

    return 0;
}