#include<iostream>
using namespace std;
void InsertionSort(int array[])
    {
        for(int i = 1;i < 10;i++)
        {
            int temp = array[i];
            int j = i - 1;
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
        int array[10] = {6,1,-7,4,22,9,8,5,3,-10};
        InsertionSort(array);
        for(int i = 0 ;i<10;i++)
        {
            cout<<array[i]<<" ";
        }
        return  0;
    }