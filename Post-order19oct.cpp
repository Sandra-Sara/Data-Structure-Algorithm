#include<iostream>
using namespace std;
void postOrderTraversal(int arr[],int idx,int n)
{
    if(idx>=n || arr[idx] == -1)
    {
        return ;
    }
    postOrderTraversal(arr,(2*idx)+1,n);
    postOrderTraversal(arr,(2*idx)+2,n);
    cout<<arr[idx] <<" ";
}
int main()
{
    int array[] ={1,2,3,4,5,6,-1,}
}