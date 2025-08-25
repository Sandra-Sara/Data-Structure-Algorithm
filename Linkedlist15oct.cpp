#include<iostream>
using namespace std;
#define size 5
int array[size];
struct Node{
    int data;
    struct Node *next;
};
struct *ArrayTolinkedlist(int arr)
{
    for(int i = 0;i<5;i++)
    {
    struct Node *temp,*head = NULL,**current = NULL;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = array[i];
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        current = temp;
    }
    else
    {
        current->next = temp;
        current = current->next;
    }
    }
    return head;
}