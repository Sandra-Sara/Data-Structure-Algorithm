#include<iostream>
using namespace std;
void countSort(int array[],int n)
{
    int maxe = array[0];
    for(int i = 0;i<n;i++)
    {
        maxe = max(maxe,array[i]);
    }
    int count[10] = {0};
    for(int i = 0;i < n;i++)
    {
        count[array[i]] = count[array[i]] + 1;
    }
    for(int i = 1;i <= maxe;i++)
    {
        count[i] = count[i] + count[i-1];
    }
    int output[10] = {0};
    for(int i = n-1;i >= 0;i--)
    {
        output[--count[array[i]]] = array[i];
    }
    for(int i = 0;i < n;i++)
    {
        array[i] = output[i];
    }
}
int main()
{
    int arr[10] = {1,5,1,3,1,7,5,4,1,3};
    countSort(arr,10);
    for(int i = 0;i < 10;i++)
    {
        cout<<arr[i] <<" ";

    }
    return 0;
}