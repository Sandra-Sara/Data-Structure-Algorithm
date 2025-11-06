#include<iostream>
using namespace std;
void InOrderTraversal(int arr[],int idx,int n)
{
    if(idx>=n || arr[idx] == -1)
    {
        return ;
    }
    InOrderTraversal(arr,(idx*2)+1,n);
    cout<<arr[idx] <<" ";
    InOrderTraversal(arr,(idx*2)+2,n);
}
int main()
{
    int array[] = {1,2,3,4,5,-1,7,-1,9,10};
    InOrderTraversal(array,0,10);
    return 0;
}
