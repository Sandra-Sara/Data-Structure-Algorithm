#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front = 0,rear = -1,totalItem = 0;
int isFull()
{
     if(totalItem == size )
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
void enqueue(int item)
{
     if(isFull())
     {
        cout<<"Sorry!the queue is full."<<endl;
        return ;
     }
      queue[rear] = item;
      rear = (rear+1) % size;
      totalItem++;
      cout<<"Successfully added: "<<item<<endl;
}
int dequeue()
{
     if(isEmpty())
     {
        cout<<"Sorry,the queue is empty!"<<endl;
        return -1;
     }
     int value = queue[front];
     queue[front] = -1;
     front = (front+1) % size;
     totalItem--;
     return value;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    cout<<"Value of deque: "<<dequeue()<<endl;
    enqueue(60);
   return 0;
}
