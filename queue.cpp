#include <iostream>
using namespace std;
#define size 5
int queue[size];
int front = 0,rear = -1,totalItem = 0;
int isImpty()
{
    if(totalItem == 0)
    {
        return true;
    }
    return false;
}
int isFull()
{
    if(totalItem == size)
    {
        return true;
    }
    return false;
}
void enqueue(int item)
{
    if(isFull())
    {
        cout<<"Sorry!Queue is full"<<endl;
    }
    raer = (rear+1) % size;
    int queue[rear] = item;
    totalItem++;
}
int dequeue()
{
    if(isEmpty())
    {
        cout<<"Sorry!Queue is empty"<<endl;
    }
    int dequeuedItem = queue[front];
    front = front+1;
    totalItem--;
    return dequeuedItem;
}
int main()
{









    
}