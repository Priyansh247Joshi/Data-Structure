#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int data)
{
    Node *temp=new Node();
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
Node *insertNode(Node *root,int key)
{
    if(root==NULL)
        return newNode(key);
   else if(key<root->data)
        root->left=insertNode(root->left,key);
    else
        root->right=insertNode(root->right,key);
    return root;
}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void iterativeInorder(Node *root)
{
    Node *current=root;
    stack<Node*> s;
    bool done=0;
    while(!done)
    {
        if(current!=NULL)
        {
            s.push(current);
            current=current->left;
        }
        else
        {
            if(!s.empty())
            {
                current=s.top();
                s.pop();
                cout<<current->data<<" ";
                current=current->right;
            }
            else
                done=1;
        }
    }
}
int main()
{
    Node *root=NULL;
    root=insertNode(root,4);
    insertNode(root,2);
    insertNode(root,5);
    insertNode(root,7);
    insertNode(root,8);
    insertNode(root,3);
    cout<<"In order Traversal using recursion: ";
    inorder(root);
    cout<<"\nIterative in order traversal using stack is: ";
    iterativeInorder(root);
    return 0;
}
