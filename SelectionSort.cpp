#include <iostream>
using namespace std;
void SelectionSort(int array[],int length)
{
    for(int i = 0;i < length-1;i++)
    {
        int min = i;
        for(int j = i+1;j < length ;j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}
int main()
{
    int array[10] = {32,1,-9,43,87,83,13,4,300,9};
    SelectionSort(array,10);
    for(int i = 0;i < 10;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
