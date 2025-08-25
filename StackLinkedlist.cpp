#include<iostream>
using namespace std;
class StackLinkedList {
    struct Node {
        int data;     // Data of the node
        Node* next;   // Pointer to the next node in the stack
    };
   struct  Node *top;  // Pointer to the top node in the stack
public:
    StackLinkedList() {
        top = nullptr;  // Initialize top to nullptr, indicating the stack is empty
    }
    // Push operation to add an element to the stack
    int isEmpty()
    {
        if(top == NULL)
        {
            return true;
        }
        return false;
    }
    void push(int x) 
    {
        Node* newNode = new Node;  // Create a new node
        newNode->data = x;         // Set data of the node
        newNode->next = top;       // Link the new node to the previous top
        top = newNode; 
        cout<<"Added :"<<x<<endl;        // Make the new node the top
    }
    // Pop operation to remove the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int popped = top->data;  // Get the data from the top node
        Node* temp = top;        // Temporary pointer to hold the top node
        top = top->next;         // Move the top pointer to the next node
        delete temp;             // Delete the old top node
        return popped;           // Return the popped data
    }
    // Peek operation to get the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;  // Return the data of the top node
    }
    // Check if the stack is empty
};
int main() {
    StackLinkedList stack;  // Create a stack

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;

    while (!stack.isEmpty()) {
        cout << "Popped: " << stack.pop() << endl;
    }

    return 0;
}
