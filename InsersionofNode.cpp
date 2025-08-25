// #include<iostream>
// #include<cstdlib>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *next;
// };
// int main()
// {
//     int array[10] = {45,6,75,81,12,19,64,85,100,42};
//     struct Node *linkedList = arrayTOlinkedlist(array);
//     printLinkedlist(struct Node *linkedList);
//     return 0;
// }
// struct Node *arrayTOlinkedlist(int array[])
// {
//     struct Node *head= NULL,*temp,*current = NULL;
//     temp = (struct Node*)malloc(sizeof(struct Node));
//     for(int i = 0;i<10;i++)
//     {
//         temp->data = array[i];
//         temp->next = NULL;
//         if(head == NULL)
//         {
//             head = temp;
//             current = temp;
//         }
//         else
//         {
//             current->next = temp;
//             current = temp;
//         }
//     }
//  return head;
// }
// struct printLinkedlist(struct Node *newHead)
// {
//     newHead = head;
//     while(newHead != 0)
//     {
//        cout<<newHead->next<<" ";
//        newHead = newHead->next;
//     }
//     cout<<"NULL";
// }
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// struct Node {
//     int data;
//     struct Node *next;
// };
// struct Node *arrayTOlinkedlist(int array[]);
// void printLinkedlist(struct Node *newHead);
// void insertNode(struct Node *head,int data);
// int main() 
// {
//     int array[10] = {45, 6, 75, 81, 12, 19, 64, 85, 100, 42};
//     struct Node *linkedList = arrayTOlinkedlist(array);
//     struct Node *inserted = insertNode(linkedList,500);
//     printLinkedlist(linkedList);
//     printLinkedlist(inserted);
//     return 0;
// }
// struct Node *arrayTOlinkedlist(int array[]) 
// {
//     struct Node *head = NULL, *temp = NULL, *current = NULL;
//     for(int i = 0; i < 10; i++) 
//     {
//         temp = (struct Node*)malloc(sizeof(struct Node));
//         temp->data = array[i];
//         temp->next = NULL;
//         if(head == NULL) 
//         {
//             head = temp;
//             current = temp;
//         } else 
//         {
//             current->next = temp;  
//             current = temp;
//         }
//     }
//     return head;
// }
// void printLinkedlist(struct Node *newHead) 
// {
//     while(newHead != NULL) 
//     {
//         cout << newHead->data << " "; 
//         newHead = newHead->next;       
//     }
//     cout << "NULL" << endl;
// }
// void insertNode(struct Node *head,int data)
// {
//     struct Node *temp = NULL;
//     temp =(struct Node*)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = head;
// }
#include<iostream>
#include<cstdlib>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
struct Node *arrayTOlinkedlist(int array[]);
void printLinkedlist(struct Node *newHead);
struct Node* insertNode(struct Node *head, int data);
int main() 
{
    int array[10] = {45, 6, 75, 81, 12, 19, 64, 85, 100, 42};
    struct Node *linkedList = arrayTOlinkedlist(array);
    
    // Insert a new node with value 500 at the beginning of the list
    linkedList = insertNode(linkedList, 500);
    
    // Print the updated linked list
    printLinkedlist(linkedList);
    
    return 0;
}

struct Node *arrayTOlinkedlist(int array[]) 
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    
    for(int i = 0; i < 10; i++) 
    {
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
            current = temp;
        }
    }
    return head;
}

void printLinkedlist(struct Node *newHead) 
{
    while(newHead != NULL) 
    {
        cout << newHead->data << " "; 
        newHead = newHead->next;       
    }
    cout << "NULL" << endl;
}
struct Node* insertNode(struct Node *head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    return temp;  // Return new head of the list
}
