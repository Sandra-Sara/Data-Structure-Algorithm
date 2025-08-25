#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int array[10] = {12,-9,54,10,-65,34,199,51,45,400};
    bubblesort(array,10);
    for(int i = 0;i<10;i++)
    {
        cout<<array[i]<<","<<endl;
    }
    return 0;
}