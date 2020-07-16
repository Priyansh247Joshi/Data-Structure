#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
class Stack
{
    int A[MAX_SIZE];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void push(int x)
    {
        if(top==MAX_SIZE-1)
        {
            cout<<"Stack Overflow!";
            return;
        }
        top++;
        A[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty: ";
            return;
        }
        top--;
    }
    int topElement()
    {
        int x= A[top];
        return x;
    }
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    void print()
    {
        cout<<"Stack: ";
        for(int i=0;i<=top;i++)
            cout<<A[i]<<" ";
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();
    s.pop();
    cout<<endl;
    s.print();
    cout<<endl<<s.topElement();
    return 0;
}
