#include<iostream>
using namespace std;
#define size 5
int stack[size];
int top = -1;
void push(int x)
{
    if(top <size-1)
    {
        top = top + 1;
        stack[top] = x;
        cout<<"Successfully added:"<<x<<" ";
    }
    else{
        cout<<"No space!!"<<endl;
    }
}
int pop()
{
    if(top>= 0)
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
    if(top >= 0)
    {
        int peeked = stack[top];
        return peeked;
    }
    else
    {
        cout<<"the stack is empty"<<endl;
        return -1;
    }
}
int main()
{
    push(10);
    push(12);
    push(23);
    push(67);
    push(90);
    return 0;
}
