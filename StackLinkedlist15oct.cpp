#include<iostream>
using namespace std;
class StactLinkedlist15oct
{
struct Node{
    int data;
    struct Node *next;
};
struct Node *top;
public:
StactLinkedlist15oct()
{
 top = NULL;
}
int isEmpty()
{
    if(top == NULL)
    {
        return true;
    }
    return  false;
}
void push(int data)
{
    if(isEmpty())
    {
        cout<<"The stack is empty"<<endl;
    }
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = top;
    top = temp;
    cout<<"Added item:"<<data<<endl;
}
int pop()
{
    if(isEmpty())
    {
        cout<<"The stack is empty"<<endl;
    }
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp = top;
    int poped = top->data;
    top = top->next;
    delete temp;
    return poped;
}
int peek()
{
    if(isEmpty())
    {
        cout<<"The stack is empty"<<endl;
    }
    int peeked = top->data;
    return peeked;
}
};
int main()
{
    StactLinkedlist15oct sl;
    sl.push(76);
    sl.push(81);
    sl.push(43);
    sl.push(64);
    cout<<"Peeked:"<<sl.peek()<<endl;
    cout<<"Poped:"<<sl.pop()<<endl;
    cout<<"Poped:"<<sl.pop()<<endl;
    cout<<"Poped:"<<sl.pop()<<endl;
    cout<<"Poped:"<<sl.pop()<<endl;
    cout<<"Peeked:"<<sl.peek()<<endl;
return 0;
}
