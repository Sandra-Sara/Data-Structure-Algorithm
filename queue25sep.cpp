#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front = 0,rear = -1,totalItem = 0;
int isFull()
{
    if(totalItem == size)
    {
        return true;
    }
    return false;
}
int isEmpty()
{
    if(totalItem == 0)
    {
        return true;
    }
    return false;
}
void enqueue(int addedItem)
{
    if(isFull())
    {
        cout<<"Sorry!The queue is full"<<endl;
        return ;
    }
    rear = (rear+1) % size;
    queue[rear] = addedItem;
    totalItem++;
    cout<<"Added item :"<<addedItem<<endl;
}
int dequeue()
{
    if(isEmpty())
    {
        cout<<"Sorry!The queue is empty"<<endl;
        return -1;
    }
    int value = queue[front];
    front = (front+1) % size;
    totalItem--;
    return value;
    cout<<"Dequeued item :"<<value<<endl;
}
int main()
{
    enqueue(12);
    enqueue(19);
    enqueue(2003);
    enqueue(2004);
    enqueue(2022);
    enqueue(2023);
    cout<<"Dequeued item :"<<dequeue()<<endl;
    enqueue(2024);
    return 0;
}