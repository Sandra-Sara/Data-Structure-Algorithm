#include<iostream>
using namespace std;
int main()
{
    int x = 12;
    int *p = &x;
    cout<<"value of x :"<<x<<endl;
    cout<<"value of address of x :"<<&x<<endl;
    cout<<"value of *p which is address of x :"<<*p<<endl;
    return 0;
}