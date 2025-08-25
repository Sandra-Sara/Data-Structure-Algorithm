#include<iostream>
using namespace std;
#define size 5
int stack[size];
int top = -1;
void push(int x)
{
    if(top < size-1)
    {
        top = top+1;
        stack[top] = x;
        cout<<"Successfully added:"<<x<<endl;
    }
    else
     cout<<"The stack is empty"<<endl;
}
int pop()
{
    if(top>=0)
    {
        int poped = stack[top];
        top = top -1;
        return poped;
    }
    else{
    cout<<"The stack is empty"<<endl;
    return -1;
    }
}
int peek()
{
    if(top>=0)
    {
        int peeked = stack[top];
        return peeked;
    }
    else{
    cout<<"The stack is empty"<<endl;
    return -1;
    }
}
int main()
{
    push(10);
    push(90);
    push(5);
    push(1);
    push(56);
    cout<<"Poped value:"<<pop()<<endl;
    push(100);
}