#include<iostream>
using namespace std;
void insertingSort(int array[],int n)
{
    for(int i = 0;i < n;i++)
    {
        int temp = array[i];
        int j = i-1 ;
        while(j >= 0 && array[j]>temp)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
}
int main()
{
    int array[10] = {2,45,65,1,31,7,90,3,-4,1};
    insertingSort(array,10);
    for(int i = 0;i<10;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}