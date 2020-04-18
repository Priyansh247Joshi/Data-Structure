#include<bits/stdc++.h>
using namespace std;
void show_stack(stack <int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    stack <int> s;
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(2);
    s.push(1);
    cout<<"The elements in the stack are: ";
    show_stack(s);
    cout<<"\nThe size of stack is: "<<s.size();
    cout<<"\nThe topmost element is: "<<s.top();
    cout<<"\nElements after pop operation are: ";
    s.pop();
    show_stack(s);
    return 0;
}
