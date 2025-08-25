#include<iostream>
using namespace std;
#define size 5
int queue[size];
int front = 0, rear = 0, totalItem = 0;

int isFull() 
{
    return totalItem == size;
}
int isEmpty() 
{
    return totalItem == 0;
}

void enqueue(int item) 
{
    if (isFull()) 
    {
        cout << "The queue is full" << endl;
        return;
    }
    queue[rear] = item;
    cout << "Successfully added: " << queue[rear] << endl;
    rear = (rear + 1) % size;  // wrap rear around circularly
    totalItem++;
}

int dequeue() 
{
    if (isEmpty()) 
    {
        cout << "The queue is empty" << endl;
        return -1;
    }
    int x = queue[front];
    front = (front + 1) % size;  // wrap front around circularly
    totalItem--;
    return x;
}
int main() 
{
    enqueue(90);
    enqueue(61);
    enqueue(6);
    enqueue(76);
    enqueue(4);
    enqueue(8);  // This will not be added, since queue is full
    cout << "Dequeued: " << dequeue() << endl;
    enqueue(8);  // Now this will be added since an item was dequeued
    return 0;
}



