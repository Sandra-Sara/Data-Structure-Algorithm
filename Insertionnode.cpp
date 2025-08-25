// #include<iostream>
//  #include<cstdlib>
//  using namespace std;
//  struct Node{
//     int data;
//     struct Node *next;
// };
//  struct Node*  arrayTolinkedlist(int array[]);
//  void printlinkedlist(struct Node *head);
//  struct Node* Insertnode(struct Node *head,int data) ;
//  struct Node* InsertAtTheEnd(struct Node *head,int data);
//  int main()
// {
//     int array[10] = {12,19,2003,2004,2022,2023,35,58,1000,91};
//     struct Node *linkedList = arrayTolinkedlist(array);
//     struct Node *newNode = Insertnode(linkedList,500) ;
//     struct Node *endingNode = InsertAtTheEnd(linkedList,980);
//     printlinkedlist(linkedList);
//     printlinkedlist(newNode);
//     printlinkedlist(endingNode);
//     return 0;
// }
// struct Node*  arrayTolinkedlist(int array[])
//  {
//      struct Node *head = NULL,*current=NULL,*temp;
//     for(int i = 0;i<10;i++)
//    {
//        temp =(struct Node*)malloc(sizeof(struct Node));
//        temp->data = array[i];
//        temp->next = NULL;
//       if(head == NULL)
//       {
//            head = temp;
//            current = temp;
//       }
//       else
//        {
//            current->next = temp;
//           current = temp;
//       }
//    }
//    return head;
//  }
//  void printlinkedlist(struct Node *head)
//  {
//      struct Node *current = head;
//     while(current != NULL)
//     {
//         cout<<current->data<<" ";
//         current = current->next;
//     }
//     cout<<"NULL"<<endl;
//  }
//  struct Node* Insertnode(struct Node *head,int data) 
//  {
//     struct Node *temp1;
//     temp1 = (struct Node*)malloc(sizeof(struct Node));
//     temp1->data = data;
//     temp1->next = NULL;
//     return temp1;
//  }
//  struct Node* InsertAtTheEnd(struct Node *head,int data)
//  {
//     struct Node *current = head;
//     while(current != NULL)
//     {
//         current = current->next;
//     }
//     struct Node *temp;
//     temp = (struct Node*)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = NULL;
//     current->next = temp;
//     return temp;
//  }
// #include<iostream>
// #include<cstdlib>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *next;
// };
// // Function prototypes
// struct Node* arrayTolinkedlist(int array[]);
// void printlinkedlist(struct Node *head);
// int main()
// {
//     int array[10] = {12, 19, 2003, 2004, 2022, 2023, 35, 58, 1000, 91};
    
//     // Corrected syntax
//     struct Node *linkedList = arrayTolinkedlist(array);
    
//     // Print the linked list
//     printlinkedlist(linkedList);

//     return 0;
// }

// struct Node* arrayTolinkedlist(int array[])
// {
//     struct Node *head = NULL, *current = NULL, *temp;
    
//     // Loop through the array to create linked list
//     for(int i = 0; i < 10; i++)
//     {
//         temp = (struct Node*)malloc(sizeof(struct Node));
//         temp->data = array[i];
//         temp->next = NULL;

//         if (head == NULL)
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
//     return head;
// }

// void printlinkedlist(struct Node *head)
// {
//     struct Node *current = head;
//     while(current != NULL)
//     {
//         cout << current->data << " ";
//         current = current->next;
//     }
//     cout << "NULL" << endl;
// }
#include<iostream>
#include<cstdlib>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
// Function prototypes
struct Node* arrayTolinkedlist(int array[]);
void printlinkedlist(struct Node *head);
struct Node* Insertnode(struct Node *head, int data);
struct Node* InsertAtTheEnd(struct Node *head, int data);
int main() {
    int array[10] = {12, 19, 2003, 2004, 2022, 2023, 35, 58, 1000, 91};
    // Create linked list from array
    struct Node *linkedList = arrayTolinkedlist(array);
    // Insert a node with value 500 (at the head or anywhere you specify)
    linkedList = Insertnode(linkedList, 500);
    // Insert a node with value 980 at the end of the list
    linkedList = InsertAtTheEnd(linkedList, 980);
    // Print the modified linked list
    printlinkedlist(linkedList);
    return 0;
}

// Function to convert array to linked list
struct Node* arrayTolinkedlist(int array[]) {
    struct Node *head = NULL, *current = NULL, *temp;
    for(int i = 0; i < 10; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = array[i];
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = temp;
        }
    }
    return head;
}

// Function to print linked list
void printlinkedlist(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Function to insert a node at the head
struct Node* Insertnode(struct Node *head, int data) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    return temp;  // Return new head
}

// Function to insert a node at the end
struct Node* InsertAtTheEnd(struct Node *head, int data) {
    struct Node *current = head;
    
    // Traverse to the last node
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Create and insert the new node at the end
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    current->next = temp;
    return head;  // Return head of the list
}
struct Node* deleteHead(struct Node *head)
{
    struct Node *temp = head;
    temp =(struct Node*)malloc(sizeof(struct Node));
    head = head->next;
   
    return temp;
}
