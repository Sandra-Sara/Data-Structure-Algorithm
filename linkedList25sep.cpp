#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
 int data;
 struct Node *next;
};
int main()
{
    struct  Node *a = NULL;
    struct  Node *b = NULL;
    struct  Node *c = NULL;
    a =(struct Node*)malloc(sizeof(struct Node));
    b =(struct Node*)malloc(sizeof(struct Node));
    c =(struct Node*)malloc(sizeof(struct Node));
    a->data = 12;
    b->data = 19;
    c->data = 2003;
    a->next = b;
    b->next = c;
    c->next = NULL;
    if(a->next != NULL)
    {
        cout<<a->next<<" "<<endl;
        a = a->next;
    }
    return 0;

}