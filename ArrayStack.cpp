#include<iostream>
using namespace std;
class StackArray{
    int *arr;
    int top;//idx
    int capacity;
    public:
    StackArray(int size)
    {
         arr = new int[5];
         top = -1;
         capacity = size;
    }
 void push(int x)
    {
        if(top <capacity -1)
        {
            top = top+1;
            arr[top] = x;
            cout<<"Added:"<<x<<endl;
        }
        else
        {
            cout<<"The stack is full"<<endl;
        }
    }
    int pop()
    {
        if(top>= 0)
        {
            int poped = arr[top]; 
            top = top-1;
            return poped;
        }
        else
        {
            cout<<"The stack is empty"<<endl;
            return -1;
        }
    }
    int peek()
    {
        if(top>= 0)
        {
            int peeked = arr[top];
            return peeked;
        }
        else
        {
            cout<<"The stack is empty"<<endl;
            return -1;
        }
    }
};
int main()
{
    StackArray stract(5);
    stract.push(23);
    stract.push(28);
    stract.push(65);
    stract.push(17);
    stract.push(77);
    return 0;
}