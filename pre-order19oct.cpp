#include<iostream>
using namespace std;
void preOrderTraversal(int arr[],int idx,int n)
{
    if( idx>=n || (arr[idx]==-1))
    {
        return ;
    }
        cout<<arr[idx]<<" ";
        preOrderTraversal(arr,(2*idx)+1,n);
        preOrderTraversal(arr,(2*idx)+2,n);
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,-1,9,10};
    preOrderTraversal( array,0,10);
    return 0;
}