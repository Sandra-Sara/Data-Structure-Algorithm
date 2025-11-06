#include<iostream>
using namespace std;
void countSort(int array[],int n,int exp)
{
    int maxe = array[0];
    for(int i = 0;i < n;i++)
    {
        maxe = max(maxe,array[i]);
    }
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int digit = (array[i] / exp) % 10;
        count[digit] = count[digit] + 1;
    }
    for(int i = 1;i < maxe;i++)
    {
        count[i] = count[i] + count[i-1];
    }
    int output[10] = {0};
    for(int i = n-1;i >= 0;i--)
    {
        int digit = (array[i]/exp) % 10;
        output[--count[digit] ]= array[i];
    }
    for(int i = 0;i < n;i++)
    {
        array[i] = output[i];
    }
}
void radixSort(int array[],int n)
{
    int m = array[0];
    for(int i = 0;i < n;i++)
    {
        m = max(m,array[i]);
    }
    for(int exp = 1;(m/exp) > 0;exp*=10)
    {
        countSort(array,n,exp);
    }
}
int main()
{int array[10] = {102,4,56,708,34,2,654,1,9,23};
    radixSort(array,10);
    for(int i = 0;i < 10;i++)
    {
        cout<<array[i]<<" ";}
    return 0;
}