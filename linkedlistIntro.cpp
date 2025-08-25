// #include<iostream>
// #include<cstdlib>
// using namespace std;
// struct Node{
//     int data;
//      struct Node *next;
// };
// int main()
// {
//     struct Node *a = NULL;
//     struct Node *b = NULL;
//     struct Node *c = NULL;
//     a = (struct Node*)malloc(sizeof(struct Node));
//     b = (struct Node*)malloc(sizeof(struct Node));
//     c = (struct Node*)malloc(sizeof(struct Node));
//     a->data = 12;
//     b->data = 19;
//     c->data = 100;
//     a->next = b;
//     b->next = c;
//     c->next = NULL;
//     while(a->next != NULL)
//     {
//         cout<<a->data<<" ";
//         a = a->next;
//     }
//     return 0;
// }
#include<iostream>
#include<cstdlib>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
int main() {
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));
    // Assigning values to the data fields
    a->data = 12;
    b->data = 19;
    c->data = 100;
    // Setting up the next pointers
    a->next = b;
    b->next = c;
    c->next = NULL;
    // Corrected loop to print the linked list
    struct Node *current = a;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
    return 0;
}
