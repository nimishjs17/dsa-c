#include<stdio.h>
#include<iostreamm.h>

using namespace std;

struct *Node
{
    int data;
    Node *left;
    Node *right;
}

void postorder(Node& node);

void main()
{

}

void postorder(Node& node)
{
    if(node != null)
    {
        postorder(node->node.left);
        cout<<node->data;
        postorder(node->node.right);
    }
}