// #include<iostream>
// #include <cstdlib>
// using namespace std;
// struct Node{
//   int data;
//   struct Node *next;
// };
// int main()
// {
//      int array[10] = {1,54,23,12,19,30,300,11,39};
//     struct Node *head = NULL;
//     head = createLinkedlist(array,10);
//     while(head != NULL)
//     {
//         cout <<head->data<<" ";
//         head = head->next;
//     }
//     cout<<"NULL";
  // struct Node *newHead = NULL;
  // newHead = reverseLinkedlist(struct Node *head);
// while(newHead != NULL)
//{
 // cout<<newHead->data<<" ";
  //newHead = newHead->next;
//}
 //cout<<"NULL";
//     return 0;
// }
// struct createLinkedlist(array[],10)
// {
//     struct Node *first = NULL,*temp,*current = NULL;
//     temp = (struct Node*)malloc(sizeof(struct Node));
//     for(int i = 0;i<10;i++)
//     {
//         temp->data = array[i];
//         temp->next = NULL;
//         if(first == NULL)
//         {
//             first = temp;
//             current = temp;
//         }
//         else
//         {
//             current->next = temp;
//             current = temp;
//         }
//     }
// return first;
// }
// void reverseLinkedlist(struct Node *head)
// {
//     struct Node *prev = NULL,*current = head,next = NULL;
//     while(current != NULL)
//     {
//         next = current->next;
//         current->next = prev;
//         prev = current ;
//         current = next;
//     }
//     head = prev;
//     while(head != NULL)
//     {
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<"NULL";
// }
#include<iostream>
#include<cstdlib>  
using namespace std;
#define SIZE 10
struct Node {
    int data;
    struct Node* next;
};
struct Node* createLinkedlist(int array[], int size) {
    struct Node* first = NULL;
    struct Node* temp = NULL;
    struct Node* current = NULL;
    for (int i = 0; i < size; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = array[i];  
        temp->next = NULL;       
        if (first == NULL) {
            first = temp;
            current = temp;
        } else {
            current->next = temp;
            current = temp;
        }
    }
    return first;
}
struct Node* reverseLinkedlist(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;    
        current->next = prev;    
        prev = current;           
        current = next;
    }
    return prev; 
}
void printLinkedlist(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main() {
    // Create an array
    int array[SIZE] = {1, 54, 23, 12, 19, 30, 300, 11, 39};
    // Create a linked list from the array
    struct Node* head = createLinkedlist(array, SIZE);
    // Print the original linked list
    cout << "Original List: ";
    printLinkedlist(head);
    // Reverse the linked list
    head = reverseLinkedlist(head);
    // Print the reversed linked list
    cout << "Reversed List: ";
    printLinkedlist(head);
    return 0;
}
